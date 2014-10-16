/*
 * Expression.c
 * Implementation of functions used to build the syntax tree and the context-saving
 */

#include "Expression.h"
#include <stdlib.h>

// free all saved expression trees
void SifuContext::clearExpressions()
{
	for(unsigned int i = 0; i < functions.size(); ++i)
	{
		delete functions[i];
	}
	functions.clear();

	for (Var_Store::iterator it=variables.begin(); it!=variables.end(); ++it)
	{
		//delete &it->first;
		delete it->second;
	}
	variables.clear();
}

// check if the given variable name exists in the storage
bool SifuContext::existsVariable(const std::string &varname) const
{
	return variables.find(varname) != variables.end();
}

// check if the given variable name exists in the storage
void SifuContext::addVariable(Var* var)
{
	variables[var->getName()] = var;
}

// return the given variable from the storage. throws an exception if it does not exist.
Var* SifuContext::getVariable(const std::string &varname) const
{
	Var_Store::const_iterator vi = variables.find(varname);
	if (vi == variables.end())
		throw(std::runtime_error("Unknown variable."));
	else
		return vi->second;
}

void SifuContext::dump() {
	std::cout << "Dumping var table..." << std::endl;
	for (Var_Store::iterator it=variables.begin(); it!=variables.end(); ++it)
	{
		std::cout << it->second->getName() << " : " << vartypenames[it->second->getType()] << " [" << toHex(it->second->getAddress()) << "]" << std::endl;
	}
}

std::string SifuContext::toHex(int i) {
	std::stringstream stream;
	stream << "0x" << std::setfill ('0') << std::setw(sizeof(int)*2) << std::hex << i;
	return stream.str();
}
