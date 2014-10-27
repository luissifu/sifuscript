/*
 * Context.cpp
 * Implementation of functions used to build the syntax tree and the context-saving
 */

#include "Context.h"

SifuContext::SifuContext() {
	currCtx = new Function("global");
	functions.push_back(currCtx);
}

SifuContext::~SifuContext()  {
	clearExpressions();
}

// free all saved expression trees
void SifuContext::clearExpressions()
{
	for(unsigned int i = 0; i < functions.size(); ++i)
	{
		delete functions[i];
	}
	functions.clear();	
}

// check if the given variable name exists in the storage
bool SifuContext::existsVariable(const std::string &varname) const {
	return currCtx->existsVariable(varname);
}

// check if the given variable name exists in the storage
void SifuContext::addVariable(Var* var) {
	currCtx->addVariable(var);
}

// return the given variable from the storage. throws an exception if it does not exist.
Var* SifuContext::getVariable(const std::string &varname) const {
	Var* var = currCtx->getVariable(varname);

	if (var == nullptr)
	{
		std::string except = "Use of undeclared variable: " + varname;
		throw(CompilerException(except.c_str()));
	}
	else
		return var;
}

void SifuContext::dump() {
	for (int i = 0; i < functions.size(); i++)
	{
		std::cout << "Dumping vars for \"" << functions[i]->getName() << "\"..." << std::endl;
		functions[i]->dump();
	}
}

bool SifuContext::existsFunction(const std::string& funcname) {
	for (int i = 1; i < functions.size(); i++)
	{
		if (functions[i]->getName().compare(funcname) == 0)
		{
			return true;
		}
	}

	return false;
}

void SifuContext::addFunction(Function* f) {
	currCtx = f;
	functions.push_back(f);
}

Function* SifuContext::getFunction(const std::string& funcname) {
	for (int i = 1; i < functions.size(); i++)
	{
		if (functions[i]->getName().compare(funcname) == 0)
		{
			return functions[i];
		}
	}

	std::string except = "Use of undeclared function: " + funcname;
	throw(CompilerException(except.c_str()));
}

void SifuContext::swapGlobalContext() {
	currCtx = functions[0];
}
