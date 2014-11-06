#include "Function.h"

Function::Function(std::string name) {
	this->name = name;
}

Function::~Function() {
	/*
	for (Var_Store::iterator it=variables.begin(); it!=variables.end(); ++it)
	{
		//delete &it->first;
		delete it->second;
	}
	variables.clear();
	*/
}

bool Function::existsVariable(const std::string &varname) const {
	return variables.find(varname) != variables.end();
}

void Function::addVariable(Var* var) {
	variables[var->getName()] = var;
}

Var* Function::getVariable(const std::string &varname) const {
	Var_Store::const_iterator vi = variables.find(varname);
	if (vi == variables.end())
		return nullptr;
	else
		return vi->second;
}

void Function::dump() {
	/*
	for (Var_Store::iterator it=variables.begin(); it!=variables.end(); ++it)
	{
		std::cout << it->second->getName() << " : " << vartypenames[it->second->getType()] << " [" << toHex(it->second->getAddress()) << "]" << std::endl;
	}
	*/
}

std::string Function::toHex(int i) {
	std::stringstream stream;
	stream << "0x" << std::setfill ('0') << std::setw(sizeof(int)*2) << std::hex << i;
	return stream.str();
}

std::string Function::getName() {
	return name;
}

void Function::setName(std::string n) {
	name = n;
}

void Function::addParam(Var* v) {
	params.push_back(v);
}

void Function::save(int funcstart) {
	func_start = funcstart;
}

void Function::end() {
	num_vars = variables.size();

	for (Var_Store::iterator it=variables.begin(); it!=variables.end(); ++it)
	{
		//delete &it->first;
		delete it->second;
	}
	variables.clear();
}

int Function::getNumParam() {
	return params.size();
}

int Function::getNumVars() {
	return num_vars;
}

int Function::getFuncStart() {
	return func_start;
}
