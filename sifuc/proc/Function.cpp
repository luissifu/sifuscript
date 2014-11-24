#include "Function.h"

Function::Function(std::string name, int type, int address) {
	this->name = name;
	this->type = type;
	this->address = address;
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
	for (int i = 0; i < params.size(); i++)
	{
		if (params[i]->getName().compare(varname) == 0)
			return params[i];
	}

	Var_Store::const_iterator vi = variables.find(varname);
	if (vi == variables.end())
		return nullptr;
	else
		return vi->second;
}

void Function::dump(FILE* file) {
	int param_num = params.size();
	fwrite(&param_num, sizeof(int), 1, file);

	for (int i = 0 ; i < param_num; i++)
	{
		int address = params[i]->getAddress();
		fwrite(&address, sizeof(int), 1, file);
	}
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

int Function::getNumParams() {
	return params.size();
}

int Function::getNumVars() {
	return num_vars;
}

int Function::getFuncStart() {
	return func_start;
}

bool Function::checkParam(int type, int num) {
	if (num >= params.size())
		return false;

	return params[num]->getType() == type;
}

int Function::getType() {
	return type;
}

int Function::getAddress() {
	return address;
}

int Function::getParamAddress(int which) {
	return params[which]->getAddress();
}
