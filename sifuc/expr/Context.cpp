/*
 * Context.cpp
 * Implementation of functions used to build the syntax tree and the context-saving
 */

#include "Context.h"

SifuContext::SifuContext() {
	currCtx = new Function("global", VARTYPE_VOID, -1);
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
	if (currCtx != functions[0])
		return currCtx->existsVariable(varname) && functions[0]->existsVariable(varname);
	else
		return currCtx->existsVariable(varname);
}

// check if the given variable name exists in the storage
void SifuContext::addVariable(Var* var) {
	currCtx->addVariable(var);
}

void SifuContext::addConst(Var* var) {
	functions[0]->addVariable(var);
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

void SifuContext::dump(FILE* file) {
	int func_num = functions.size() - 1;
	fwrite(&func_num, sizeof(int), 1, file);

	for (int i = 1; i < functions.size(); i++)
	{
		functions[i]->dump(file);
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

bool SifuContext::is_void() {
	return currCtx->getType() == VARTYPE_VOID;
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

void SifuContext::addParam(Var* v) {
	currCtx->addParam(v);
}

void SifuContext::swapGlobalContext() {
	currCtx = functions[0];
}

void SifuContext::save(int func) {
	currCtx->save(func);
}

void SifuContext::end() {
	currCtx->end();
}

int SifuContext::getAddress() {
	return currCtx->getAddress();
}

bool SifuContext::isGlobal() {
	return currCtx == functions[0];
}
