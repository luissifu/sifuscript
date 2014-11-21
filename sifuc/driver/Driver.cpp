// $Id: driver.cc 39 2008-08-03 10:07:15Z tb $
/** \file driver.cc Implementation of the example::Driver class. */

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

		for(unsigned int i = 0; i < consts.size(); ++i)
		{
			delete consts[i];
		}
		consts.clear();
	}

	void Driver::saveconsts(FILE* file) {
		int size = consts.size();
		fwrite(&size, sizeof(int), 1, file);
		for(int i = 0; i < size; i++)
		{
			int type = consts[i]->getType();
			fwrite(&type, sizeof(int), 1, file);

			switch(type)
			{
				case VARTYPE_BOOL:
					{
						bool val = consts[i]->getName()[0] == 't';
						int add = consts[i]->getAddress();

						fwrite(&add, sizeof(int), 1, file);
						fwrite(&val, sizeof(bool), 1, file);
					}
					break;

				case VARTYPE_CHAR:
					{
						char val = consts[i]->getName()[1];
						int add = consts[i]->getAddress();

						fwrite(&add, sizeof(int), 1, file);
						fwrite(&val, sizeof(char), 1, file);
					}
					break;

				case VARTYPE_LONG:
					{
						long val = std::stol(consts[i]->getName());
						int add = consts[i]->getAddress();

						fwrite(&add, sizeof(int), 1, file);
						fwrite(&val, sizeof(long), 1, file);
					}
					break;

				case VARTYPE_DOUBLE:
					{
						double val = std::stod(consts[i]->getName());
						int add = consts[i]->getAddress();

						fwrite(&add, sizeof(int), 1, file);
						fwrite(&val, sizeof(double), 1, file);
					}
					break;

				case VARTYPE_STRING:
					break;
			}

		}
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

		int mem_type = context.isGlobal() ? MEM_GLOBAL : MEM_LOCAL;

		Var* v = new Var(var, type, memory.request(type,mem_type));
		context.addVariable(v);
	}

	void Driver::checkFunc() {
		std::string func = idstack.top();
		idstack.pop();

		int type = VARTYPE_VOID;

		if (!typestack.empty())
		{
			int type = typestack.top();
			typestack.pop();
		}

		if (context.existsFunction(func))
		{
			std::string except = "Redefinition of existing function: " + func;
			throw(CompilerException(except.c_str()));
		}

		Function* f = new Function(func);
		context.addFunction(f);
	}

	void Driver::verifyFunc() {
		std::string func = idstack.top();
		idstack.pop();

		Function* f = context.getFunction(func);

		curr_func.func = f;
		curr_func.param = 0;
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

		expr.operands.push(v);
	}

	void Driver::toOperator(char op) {
		expr.operators.push(op);
	}

	void Driver::endExp() {
		char paren = expr.operators.top();

		if (paren != '(')
		{
			std::string except = "Missing closing parentesis";
			throw (CompilerException(except.c_str()));
		}

		expr.operators.pop();
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
		if (expr.operators.empty())
			return;

		char topop = expr.operators.top();
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

		expr.operators.pop();

		char realop = getMappedOp(topop);

		if (!unary)
		{
			Var* right = expr.operands.top();
			expr.operands.pop();

			Var* left = expr.operands.top();
			expr.operands.pop();

			int restype = expr.isValid(realop, left->getType(), right->getType());

			if (restype == -1)
			{
				std::string except = "Operation not permitted, " + vartypenames[left->getType()] + " ";
				except += topop;
				except += " " + vartypenames[right->getType()];
				throw (CompilerException(except.c_str()));
			}

			Var* result = new Var("temp", restype, memory.request(restype,MEM_TEMP));
			temps.push_back(result);
			expr.operands.push(result);

			program.createStatement(realop, left->getAddress(), right->getAddress(), result->getAddress());
		}
		else
		{
			Var* left = expr.operands.top();
			expr.operands.pop();

			if (left->getType() != VARTYPE_BOOL)
			{
				std::string except = "Operation not permitted, ";
				except += topop;
				except += " " + vartypenames[left->getType()];
				throw (CompilerException(except.c_str()));
			}

			Var* result = new Var("temp", VARTYPE_BOOL, memory.request(VARTYPE_BOOL,MEM_TEMP));
			temps.push_back(result);
			expr.operands.push(result);

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
		if (expr.operators.empty())
			return;

		char eq = expr.operators.top();

		if (eq != '=')
		{
			std::string except = "Malformed assignment";
			throw (CompilerException(except.c_str()));
		}

		expr.operators.pop();

		char realop = getMappedOp(eq);

		Var* result = expr.operands.top();
		expr.operands.pop();

		Var* left = expr.operands.top();
		expr.operands.pop();

		if (expr.isValid(realop, left->getType(), result->getType()) == -1)
		{
			std::string except = "Incompatible types: Assigning " + vartypenames[result->getType()] + " to " + vartypenames[left->getType()];
			throw (CompilerException(except.c_str()));
		}

		program.createStatement(realop, result->getAddress(), -1, left->getAddress());
	}

	void Driver::addConst(char* name, char type) {
		Var* v;
		std::string nam = std::string(name);

		if (context.existsVariable(name))
		{
			v = context.getVariable(nam);
		}
		else
		{
			switch(type)
			{
				case 'b':
					v = new Var(nam, VARTYPE_BOOL, memory.request(VARTYPE_BOOL,MEM_GLOBAL));
					break;

				case 'c':
					v = new Var(nam, VARTYPE_CHAR, memory.request(VARTYPE_CHAR,MEM_GLOBAL));
					break;

				case 'i':
					v = new Var(nam, VARTYPE_LONG, memory.request(VARTYPE_LONG,MEM_GLOBAL));
					break;

				case 'f':
					v = new Var(nam, VARTYPE_DOUBLE, memory.request(VARTYPE_DOUBLE,MEM_GLOBAL));
					break;

				case 's':
					v = new Var(nam, VARTYPE_STRING, memory.request(VARTYPE_STRING,MEM_GLOBAL));
					break;

				default:
					return;
			}

			consts.push_back(v);
			context.addConst(v);
		}

		expr.operands.push(v);
	}

	void Driver::genIf() {
		Var* result = expr.operands.top();
		expr.operands.pop();

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
		Var* result = expr.operands.top();
		expr.operands.pop();

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
		Var* ex = expr.operands.top();
		expr.operands.pop();

		if (ex->getType() != VARTYPE_BOOL)
		{
			std::string except = "Not a boolean expresion in WHILE statement";
			throw (CompilerException(except.c_str()));
		}

		program.createStatement(OP_JUMP_FALSE, ex->getAddress(), -1, -1);

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
		Var* ex = expr.operands.top();
		expr.operands.pop();

		if (ex->getType() != VARTYPE_BOOL)
		{
			std::string except = "Not a boolean expresion in DO WHILE statement";
			throw (CompilerException(except.c_str()));
		}

		int resultJump = jumps.top();
		jumps.pop();

		program.createStatement(OP_JUMP_TRUE, ex->getAddress(), -1, resultJump);

	}

	void Driver::startFor() {
		jumps.push(program.getCounter());
	}

	void Driver::genFor() {
		Var* ex = expr.operands.top();
		expr.operands.pop();

		if (ex->getType() != VARTYPE_BOOL)
		{
			std::string except = "Not a boolean expresion in FOR statement";
			throw (CompilerException(except.c_str()));
		}

		program.createStatement(OP_JUMP_FALSE, ex->getAddress(), -1, -1);

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
		Var* res = expr.operands.top();
		expr.operands.pop();

		program.createStatement(OP_PRINT, -1, -1, res->getAddress());
	}

	void Driver::genRead() {
		Var* res = expr.operands.top();
		expr.operands.pop();

		program.createStatement(OP_READ, -1, -1, res->getAddress());
	}

	void Driver::addParam() {
		std::string var = idstack.top();
		idstack.pop();

		int type = typestack.top();
		typestack.pop();

		if (context.existsVariable(var))
		{
			std::string except = "Redifinition of parameter in function: " + var;
			throw(CompilerException(except.c_str()));
		}

		Var* v = new Var(var, type, memory.request(type,MEM_LOCAL));
		//context.addVariable(v);
		context.addParam(v);
	}

	void Driver::saveFunc() {
		context.save(program.getCounter());
	}

	void Driver::endFunc() {
		context.end();

		memory.clear(MEM_LOCAL);

		program.createStatement(OP_RETURN, -1, -1, -1);

		context.swapGlobalContext();
	}

	void Driver::genEra() {
		program.createStatement(OP_ERA, curr_func.func->getNumParams(), -1, -1);
	}

	void Driver::genParam() {
		Var* arg = expr.operands.top();
		expr.operands.pop();

		if (!curr_func.func->checkParam(arg->getType(), curr_func.param))
		{
			std::string except = "Incorrect type in argument: " + arg->getName() + " of type " + vartypenames[arg->getType()];
			throw(CompilerException(except.c_str()));
		}

		program.createStatement(OP_SET_PARAM, arg->getAddress(), -1, curr_func.param);
		curr_func.param++;

	}

	void Driver::genSub() {
		if (curr_func.func->getNumParams() != curr_func.param)
		{
			std::string except = "Wrong number of arguments in function call";
			throw(CompilerException(except.c_str()));
		}

		program.createStatement(OP_JUMP_SUB, -1, -1, curr_func.func->getFuncStart());
	}

	void Driver::endProg() {
		memory.clear(MEM_GLOBAL);
		memory.clear(MEM_LOCAL);
		memory.clear(MEM_TEMP);
	}

} // namespace example
