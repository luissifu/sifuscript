#include "Program.h"

Program::Program() {
	name = "";
}

Program::Program(std::string name) {
	this->name = name;
}

/*
void Program::save(std::ofstream& file) {
	std::cout << "Program result: [0.." << statlist.size()-1 << "]" << std::endl;
	for (int i =  0; i < statlist.size(); i++)
	{
		std::cout << std::setw(3) << i;
		std::cout << " " << statlist[i].toString() << std::endl;
		file << statlist[i].toObj() << std::endl;
	}
}
*/

void Program::write(FILE* file) {
	std::cout << "Program result: [0.." << statlist.size()-1 << "]" << std::endl;
	for (int i = 0; i < statlist.size(); i++)
	{
		std::cout << std::setw(3) << i;
		std::cout << " | " << statlist[i].toObj() << std::endl;

		fwrite(statlist[i].getOp(), sizeof(char), 1, file);
		fwrite(statlist[i].getLeft(), sizeof(int), 1, file);
		fwrite(statlist[i].getRight(), sizeof(int), 1, file);
		fwrite(statlist[i].getResult(), sizeof(int), 1, file);
	}
}

void Program::createDummyStatement() {
	Statement stmt(-1, -1, -1, -1);
	statlist.push_back(stmt);
}

void Program::createStatement(char op, int left, int right, int result) {
	Statement stmt(op, left, right, result);
	statlist.push_back(stmt);
}

void Program::fill(int position, int data) {
	statlist[position].fillResult(data);
}

int Program::getCounter() {
	return statlist.size();
}

Statement Program::pop() {
	Statement stat = statlist.back();
	statlist.pop_back();

	return stat;
}

void Program::push(Statement st) {
	statlist.push_back(st);
}
