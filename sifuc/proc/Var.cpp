#include "Var.h"

Var::Var(std::string name, int type, int address, bool dim) {
	this->name = name;
	this->type = type;
	this->address = address;
	dimension = dim;
	array_type = type;
	size = 0;
}

void Var::setArrayType(int type) {
	array_type = type;
}

int Var::getArrayType() {
	return array_type;
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

bool Var::isDimension() {
	return dimension;
}

void Var::add_dim(int dim) {
	dim_info inf;
	inf.size = dim;
	inf.m = 0;

	info.push_back(inf);
}

int Var::getSize() {
	return size;
}

void Var::calculate_offset() {
	int factor = 1;

	for (int i = 0; i < info.size(); i++)
	{
		factor *= info[i].size;
	}

	size = factor;

	for (int i = 0; i < info.size(); i++)
	{
		factor /= info[i].size;
		info[i].m = factor;
	}

	info[info.size() - 1].m = 0;
}

int Var::getDimNum() {
	return info.size();
}

dim_info Var::getInfo(int which) {
	return info[which];
}
