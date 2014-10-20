#pragma once
#include <string>
#include <sstream>
#include <iomanip>
#include "../../common/Operations.h"

class Statement {
	public:
		Statement(char op, int l, int r, int res);
		std::string toString();
		std::string toObj();
		std::string toHex(int i);
		void fillResult(int res);
	private:
		char operation;
		int left;
		int right;
		int result;
};
