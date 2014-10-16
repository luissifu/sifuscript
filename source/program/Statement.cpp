#include "Statement.h"

Statement::Statement(char op, int l, int r, int res) {
	operation = op;
	left = l;
	right= r;
	result = res;
}

std::string Statement::toString() {
	std::string op = opnames[(int)operation];
	std::string l = left != -1 ? toHex(left) : "    ~~    ";
	std::string r = right != -1 ? toHex(right) : "    ~~    ";;
	std::string res = toHex(result);

	return op + " " + l + " " + r + " " + res;
}

std::string Statement::toObj() {
	std::string op = std::to_string(operation);
	std::string l = std::to_string(left);
	std::string r = std::to_string(right);
	std::string res = std::to_string(result);

	return op + " " + l + " " + r + " " + res;
}

std::string Statement::toHex(int i) {
	std::stringstream stream;
	stream << "0x" << std::setfill ('0') << std::setw(sizeof(int)*2) << std::hex << i;
	return stream.str();
}
