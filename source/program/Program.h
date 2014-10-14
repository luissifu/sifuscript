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
		void createStatement(char op, Var* left, Var* right, Var* result);
	private:
		std::vector<Statement> statlist;
		std::string name;
};
