#pragma once
#include <string>
#include <sstream>
#include <iomanip>

enum OP_INSTRUCTIONS {
	OP_ADD,
	OP_SUB,
	OP_MULT,
	OP_DIV,
	OP_MOD,
	OP_AND,
	OP_OR,
	OP_LESS,
	OP_MORE,
	OP_LESSEQ,
	OP_MOREEQ,
	OP_EQ,
	OP_NOTEQ,
	OP_ASSIGN,
	OP_NOT
};

const std::string opnames[] = {
	"ADD ",
	"SUB ",
	"MULT",
	"DIV ",
	"MOD ",
	"AND ",
	"OR  ",
	"LESS",
	"MORE",
	"LSEQ",
	"MOEQ",
	"EQ  ",
	"NOEQ",
	"ASGN",
	"NOT "
};

class Statement {
	public:
		Statement(char op, int l, int r, int res);
		std::string toString();
		std::string toObj();
		std::string toHex(int i);
	private:
		char operation;
		int left;
		int right;
		int result;
};
