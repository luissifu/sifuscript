#include "Program.h"

Program::Program() {
	name = "";
}

Program::Program(std::string name) {
	this->name = name;
}

void Program::save() {
	for (int i =  0; i < statlist.size(); i++)
	{
		std::cout << statlist[i].toString() << std::endl;
	}
}

void Program::createStatement(char op, int left, int right, int result) {
	Statement stmt(op, left, right, result);
	statlist.push_back(stmt);
}
