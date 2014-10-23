// $Id: driver.cc 39 2008-08-03 10:07:15Z tb $
/** \file driver.cc Implementation of the example::Driver class. */

#include <fstream>
#include <sstream>

#include "Driver.h"

namespace ss {

	Driver::Driver(SifuContext& cont, Program& prog)
		: trace_scanning(false),
		trace_parsing(false),
		context(cont),
		program(prog)
	{
	}

	Driver::~Driver() {
		clearExp();

		for (int i = 0; i < consts.size(); i++)
		{
			delete consts[i];
		}
		consts.clear();
	}


	bool Driver::parse_stream(std::istream& in, const std::string& sname)
	{
		try
		{
			streamname = sname;

			Token scanner(&in);
			scanner.set_debug(trace_scanning);
			this->lexer = &scanner;

			Gramatica parser(*this);
			parser.set_debug_level(trace_parsing);
			return (parser.parse() == 0);
		}
		catch(CompilerException& e)
		{
			std::cout << "Error detected: " << e.what() << std::endl;
			return false;
		}
	}

	bool Driver::parse_file(const std::string &filename)
	{
		std::ifstream in(filename.c_str());
		if (!in.good())
			return false;
		return parse_stream(in, filename);
	}

	bool Driver::parse_string(const std::string &input, const std::string& sname)
	{
		std::istringstream iss(input);
		return parse_stream(iss, sname);
	}

	void Driver::error(const class location& l, const std::string& m)
	{
		std::cerr << l << ": " << m << std::endl;
	}

	void Driver::error(const std::string& m)
	{
		std::cerr << m << std::endl;
	}

	void Driver::addId(char* str) {
		std::string s(str);
		idstack.push(s);
	}

	void Driver::copyId() {
		std::string copy = idstack.top();
		idstack.push(copy);
	}

	void Driver::checkVar() {
		std::string var = idstack.top();
		idstack.pop();

		int type = typestack.top();
		typestack.pop();

		if (context.existsVariable(var))
		{
			std::string except = "Redefinition of existing variable: " + var;
			throw(CompilerException(except.c_str()));
		}

		Var* v = new Var(var, type, memory.request(type,MEM_LOCAL));
		context.addVariable(v);
	}

	void Driver::addType(char* type) {
		std::string typen(type);

		int maptype;

		if (typen.compare("boolean") == 0)
		{
			maptype = VARTYPE_BOOL;
		}
		else if (typen.compare("char") == 0)
		{
			maptype = VARTYPE_CHAR;
		}
		else if (typen.compare("short") == 0)
		{
			maptype = VARTYPE_SHORT;
		}
		else if (typen.compare("int") == 0)
		{
			maptype = VARTYPE_INT;
		}
		else if (typen.compare("long") == 0)
		{
			maptype = VARTYPE_LONG;
		}
		else if (typen.compare("float") == 0)
		{
			maptype = VARTYPE_FLOAT;
		}
		else if (typen.compare("double") == 0)
		{
			maptype = VARTYPE_DOUBLE;
		}
		else if (typen.compare("string") == 0)
		{
			maptype = VARTYPE_STRING;
		}
		else
		{
			maptype = VARTYPE_CLASS;
		}

		typestack.push(maptype);
	}

	void Driver::toOperand() {
		std::string name = idstack.top();
		idstack.pop();

		Var* v = context.getVariable(name);

		aritmetic.operands.push(v);
	}

	void Driver::toOperator(char op) {
		aritmetic.operators.push(op);
	}

	void Driver::endExp() {
		char paren = aritmetic.operators.top();

		if (paren != '(')
		{
			std::string except = "Missing closing parentesis";
			throw (CompilerException(except.c_str()));
		}

		aritmetic.operators.pop();
	}

	void Driver::clearExp() {
		for (int i = 0; i < temps.size(); i++)
		{
			delete temps[i];
		}
		temps.clear();

		memory.clear(MEM_TEMP);
	}

	void Driver::genExp(char type) {
		if (aritmetic.operators.empty())
			return;

		char topop = aritmetic.operators.top();
		bool unary = false;

		switch(type)
		{
			case '+':
				if (topop != '+' && topop != '-')
					return;
				break;

			case '*':
				if (topop != '*' && topop != '/' && topop != '%')
					return;
				break;

			case '&':
				if (topop != '&' && topop != '|')
					return;
				break;

			case '>':
				if (topop != '>' && topop != '<' && topop != 'l' && topop != 'm' && topop != 'e' && topop != 'n')
					return;
				break;

			case '!':
				if (topop != '!')
					return;
				else
					unary = true;
				break;

			default:
				return;
		}

		aritmetic.operators.pop();

		char realop = getMappedOp(topop);

		if (!unary)
		{
			Var* right = aritmetic.operands.top();
			aritmetic.operands.pop();

			Var* left = aritmetic.operands.top();
			aritmetic.operands.pop();

			int restype = aritmetic.isValid(realop, left->getType(), right->getType());

			if (restype == -1)
			{
				std::string except = "Operation not permitted, " + vartypenames[left->getType()] + " ";
				except += topop;
				except += " " + vartypenames[right->getType()];
				throw (CompilerException(except.c_str()));
			}

			Var* result = new Var("temp", restype, memory.request(restype,MEM_TEMP));
			temps.push_back(result);
			aritmetic.operands.push(result);

			program.createStatement(realop, left->getAddress(), right->getAddress(), result->getAddress());
		}
		else
		{
			Var* left = aritmetic.operands.top();
			aritmetic.operands.pop();

			if (left->getType() != VARTYPE_BOOL)
			{
				std::string except = "Operation not permitted, ";
				except += topop;
				except += " " + vartypenames[left->getType()];
				throw (CompilerException(except.c_str()));
			}

			Var* result = new Var("temp", VARTYPE_BOOL, memory.request(VARTYPE_BOOL,MEM_TEMP));
			temps.push_back(result);
			aritmetic.operands.push(result);

			program.createStatement(realop, left->getAddress(), -1, result->getAddress());
		}
	}

	char Driver::getMappedOp(char op) {
		switch(op)
		{
			case '+': return OP_ADD;
			case '-': return OP_SUB;
			case '*': return OP_MULT;
			case '/': return OP_DIV;
			case '%': return OP_MOD;
			case '&': return OP_AND;
			case '|': return OP_OR;
			case '<': return OP_LESS;
			case '>': return OP_MORE;
			case 'l': return OP_LESSEQ;
			case 'm': return OP_MOREEQ;
			case 'e': return OP_EQ;
			case 'n': return OP_NOTEQ;
			case '!': return OP_NOT;
			case '=': return OP_ASSIGN;
		}
	}

	void Driver::genAssign() {
		if (aritmetic.operators.empty())
			return;

		char eq = aritmetic.operators.top();

		if (eq != '=')
		{
			std::string except = "Malformed assignment";
			throw (CompilerException(except.c_str()));
		}

		aritmetic.operators.pop();

		char realop = getMappedOp(eq);

		Var* result = aritmetic.operands.top();
		aritmetic.operands.pop();

		Var* left = aritmetic.operands.top();
		aritmetic.operands.pop();

		if (aritmetic.isValid(realop, left->getType(), result->getType()) == -1)
		{
			std::string except = "Incompatible types: Assigning " + vartypenames[result->getType()] + " to " + vartypenames[left->getType()];
			throw (CompilerException(except.c_str()));
		}

		program.createStatement(realop, result->getAddress(), -1, left->getAddress());
	}

	void Driver::addConst(char* name, char type) {
		Var* v;

		switch(type)
		{
			case 'b':
				v = new Var("const", VARTYPE_BOOL, memory.request(VARTYPE_BOOL,MEM_GLOBAL));
				break;

			case 'c':
				v = new Var("const", VARTYPE_CHAR, memory.request(VARTYPE_CHAR,MEM_GLOBAL));
				break;

			case 'i':
				v = new Var("const", VARTYPE_LONG, memory.request(VARTYPE_LONG,MEM_GLOBAL));
				break;

			case 'f':
				v = new Var("const", VARTYPE_DOUBLE, memory.request(VARTYPE_DOUBLE,MEM_GLOBAL));
				break;

			case 's':
				v = new Var("const", VARTYPE_STRING, memory.request(VARTYPE_STRING,MEM_GLOBAL));
				break;

			default:
				return;
		}

		consts.push_back(v);
		aritmetic.operands.push(v);
	}

	void Driver::genIf() {
		Var* result = aritmetic.operands.top();
		aritmetic.operands.pop();

		if (result->getType() != VARTYPE_BOOL)
		{
			std::string except = "Not a boolean expresion in IF statement";
			throw (CompilerException(except.c_str()));
		}

		program.createStatement(OP_JUMP_FALSE, result->getAddress(), -1, -1);
		jumps.push(-1);
		jumps.push(program.getCounter()-1);
	}

	void Driver::genElse() {
		program.createStatement(OP_JUMP, -1, -1, -1);

		int falseJump = jumps.top();
		jumps.pop();

		program.fill(falseJump, program.getCounter());
		
		jumps.push(program.getCounter()-1);
	}

	void Driver::genElseIf() {
		//else
		program.createStatement(OP_JUMP, -1, -1, -1);

		int falseJump = jumps.top();
		jumps.pop();

		program.fill(falseJump, program.getCounter());
		jumps.push(program.getCounter()-1);

		//if
		Var* result = aritmetic.operands.top();
		aritmetic.operands.pop();

		if (result->getType() != VARTYPE_BOOL)
		{
			std::string except = "Not a boolean expresion in IF statement";
			throw (CompilerException(except.c_str()));
		}

		program.createStatement(OP_JUMP_FALSE, result->getAddress(), -1, -1);

		jumps.push(program.getCounter()-1);
	}

	void Driver::endIf() {
		int topJump = jumps.top();
		jumps.pop();

		do 
		{
			program.fill(topJump, program.getCounter());

			topJump = jumps.top();
			jumps.pop();
		} 
		while (topJump != -1);
	}

	void Driver::startWhile() {
		jumps.push(program.getCounter());
	}

	void Driver::genWhile() {
		Var* expr = aritmetic.operands.top();
		aritmetic.operands.pop();

		if (expr->getType() != VARTYPE_BOOL)
		{
			std::string except = "Not a boolean expresion in WHILE statement";
			throw (CompilerException(except.c_str()));
		}

		program.createStatement(OP_JUMP_FALSE, expr->getAddress(), -1, -1);

		jumps.push(program.getCounter()-1);
	}

	void Driver::endWhile() {
		int falseJump = jumps.top();
		jumps.pop();

		int resultJump = jumps.top();
		jumps.pop();

		program.createStatement(OP_JUMP, -1, -1, resultJump);

		program.fill(falseJump, program.getCounter());
	}

	void Driver::startDo() {
		jumps.push(program.getCounter());
	}

	void Driver::genDo() {
		Var* expr = aritmetic.operands.top();
		aritmetic.operands.pop();

		if (expr->getType() != VARTYPE_BOOL)
		{
			std::string except = "Not a boolean expresion in DO WHILE statement";
			throw (CompilerException(except.c_str()));
		}

		int resultJump = jumps.top();
		jumps.pop();

		program.createStatement(OP_JUMP_TRUE, expr->getAddress(), -1, resultJump);

	}

	void Driver::startFor() {
		jumps.push(program.getCounter());
	}

	void Driver::genFor() {
		Var* expr = aritmetic.operands.top();
		aritmetic.operands.pop();

		if (expr->getType() != VARTYPE_BOOL)
		{
			std::string except = "Not a boolean expresion in FOR statement";
			throw (CompilerException(except.c_str()));
		}

		program.createStatement(OP_JUMP_FALSE, expr->getAddress(), -1, -1);

		jumps.push(program.getCounter()-1);
		jumps.push(program.getCounter());
	}

	void Driver::saveFor() {
		int from = jumps.top();
		int until = program.getCounter();
		jumps.pop();

		for (int i = from; i < until; i++)
		{
			forstats.push_back(program.pop());
		}
	}

	void Driver::endFor() {
		while(!forstats.empty())
		{
			program.push(forstats.back());
			forstats.pop_back();
		}

		int falseJump = jumps.top();
		jumps.pop();

		int resultJump = jumps.top();
		jumps.pop();

		program.createStatement(OP_JUMP, -1, -1, resultJump);

		program.fill(falseJump, program.getCounter());
	}

	void Driver::genPrint() {
		Var* res = aritmetic.operands.top();
		aritmetic.operands.pop();

		program.createStatement(OP_PRINT, -1, -1, res->getAddress());
	}

	void Driver::genRead() {
		Var* res = aritmetic.operands.top();
		aritmetic.operands.pop();

		program.createStatement(OP_READ, -1, -1, res->getAddress());
	}

} // namespace example
