#include "Statement.h"

Statement::Statement(char op, int l, int r, int res) {
	operation = op;
	left = l;
	right= r;
	result = res;
}

std::string Statement::toString() {
	std::string op = std::to_string(operation);
	std::string l = std::to_string(left);
	std::string r = std::to_string(right);
	std::string res = std::to_string(result);

	return op + " " + l + " " + r + " " + res;
}

std::string Statement::toObj() {
	return "toObj";
}
