#pragma once

#include <string>
#include <vector>
#include <iostream>

#include "Statement.h"
#include "../vars/Var.h"

class Program {
	public:
		Program();
		Program(std::string name);
		void save();
		void createStatement(char op, int left, int right, int result);
	private:
		std::vector<Statement> statlist;
		std::string name;
};
