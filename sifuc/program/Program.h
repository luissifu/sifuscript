#pragma once

#include <string>
#include <vector>
#include <iostream>
#include <fstream>

#include "Statement.h"
#include "../proc/Var.h"

class Program {
	public:
		Program();
		Program(std::string name);
		void save(std::ofstream& file);
		void createStatement(char op, int left, int right, int result);
		void fill(int position, int data);
		int getCounter();
		Statement pop();
		void push(Statement st);
	private:
		std::vector<Statement> statlist;
		std::string name;
};
