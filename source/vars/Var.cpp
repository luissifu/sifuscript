#include "Var.h"

Var::Var(std::string name, int type, int address) {
	this->name = name;
	this->type = type;
	//cambiar mas adelante
	this->address = 0;
}

bool Var::isOfType(int t) {
	return type == t;
}

std::string Var::getName() {
	return name;
}

int Var::getType() {
	return type;
}

int Var::getDirection() {
	return address;
}
