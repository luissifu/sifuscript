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

void Program::createStatement(char op, Var* left, Var* right, Var+ result) {
	Statement stmt(op, left->getAddress(), right->getAddress(), result->getAddress());
	statlist.push_back(stmt);
}
