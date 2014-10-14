#pragma once

enum OP_INSTRUCTIONS {
	OP_ADD,
	OP_SUB,
	OP_MULT,
	OP_DIV
}

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
}
