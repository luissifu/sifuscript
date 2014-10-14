#include "Statement.h"

Statement::Statement(char op, int l, int r, int res) {
	operation = op;
	left = l;
	right= r;
	result = res;
}

std::string Statement::toString() {
	return "toString";
}

std::string Statement::toObj() {
	return "toObj";
}
