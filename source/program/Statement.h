#pragma once
#include <string>

enum OP_INSTRUCTIONS {
	OP_ASSIGN,
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
	OP_NOT
};

const std::string opnames[] = {
	"ASGN",
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
	"NOT "
};

class Statement {
	public:
		Statement(char op, int l, int r, int res);
		std::string toString();
		std::string toObj();
	private:
		char operation;
		int left;
		int right;
		int result;
};
