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
	}


	bool Driver::parse_stream(std::istream& in, const std::string& sname)
	{
		streamname = sname;

		Token scanner(&in);
		scanner.set_debug(trace_scanning);
		this->lexer = &scanner;

		Gramatica parser(*this);
		parser.set_debug_level(trace_parsing);
		return (parser.parse() == 0);
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

	void Driver::checkVar() {
		std::string var = idstack.top();
		idstack.pop();

		int type = typestack.top();
		typestack.pop();

		if (context.existsVariable(var))
		{
			std::cout << "Already exists" << std::endl;
			return;
		}

		Var* v = new Var(var, type, 0);
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
			std::cout << "Malformed expresion" << std::endl;
			return;
		}

		aritmetic.operators.pop();
	}

	void Driver::clearExp() {
		for (int i = 0; i < temps.size(); i++)
		{
			delete temps[i];
		}
		temps.clear();

		for (int i = 0; i < consts.size(); i++)
		{
			delete consts[i];
		}
		consts.clear();
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
				std::cout << "Invalid operation" << std::endl;
				return;
			}

			Var* result = new Var("temp", restype, 1);
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
				std::cout << "Invalid operation" << std::endl;
				return;
			}

			Var* result = new Var("temp", VARTYPE_BOOL, 1);
			temps.push_back(result);
			aritmetic.operands.push(result);

			program.createStatement(realop, left->getAddress(), -1, result->getAddress());
		}
	}

	char Driver::getMappedOp(char op) {
		switch(op)
		{
			case '=': return OP_ASSIGN;
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
		}
	}

	void Driver::genAssign() {
		if (aritmetic.operators.empty())
			return;

		char eq = aritmetic.operators.top();

		if (eq != '=')
		{
			std::cout << "Malformed assignment" << std::endl;
			return;
		}

		aritmetic.operators.pop();

		char realop = getMappedOp(eq);

		Var* left = aritmetic.operands.top();
		aritmetic.operands.pop();

		Var* result = aritmetic.operands.top();
		aritmetic.operands.pop();

		program.createStatement(realop, left->getAddress(), -1, result->getAddress());
	}

	void Driver::addConst(char* name, char type) {
		Var* v;

		switch(type)
		{
			case 'b':
				v = new Var("const", VARTYPE_BOOL, 2);
				break;

			case 'c':
				v = new Var("const", VARTYPE_CHAR, 2);
				break;

			case 'i':
				v = new Var("const", VARTYPE_LONG, 2);
				break;

			case 'f':
				v = new Var("const", VARTYPE_DOUBLE, 2);
				break;

			case 's':
				v = new Var("const", VARTYPE_STRING, 2);
				break;

			default:
				return;
		}

		consts.push_back(v);
		aritmetic.operands.push(v);
	}

} // namespace example
