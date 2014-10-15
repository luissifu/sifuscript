#pragma once

#include <stack>
#include "../vars/Var.h"

class Aritmetic {
	public:
		Aritmetic();
		std::stack<char> operators;
		std::stack<Var*> operands;
		int isValid(char op, int leftype, int righttype);
};
