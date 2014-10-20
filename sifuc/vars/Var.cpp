#include "Var.h"

Var::Var(std::string name, int type, int address) {
	this->name = name;
	this->type = type;
	this->address = address;
}

bool Var::isOfType(vartype t) {
	return type == t;
}

std::string Var::getName() {
	return name;
}

int Var::getType() {
	return type;
}

int Var::getAddress() {
	return address;
}
