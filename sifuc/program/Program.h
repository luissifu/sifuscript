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
		void fill(int position, int data);
		int getCounter();
		Statement pop();
		void push(Statement st);
	private:
		std::vector<Statement> statlist;
		std::string name;
};
