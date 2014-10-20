#pragma once
#include <string>
#include <sstream>
#include <iomanip>
#include "../../common/Operations.h"

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
