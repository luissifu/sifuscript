#pragma once

#include <map>
#include <vector>
#include <string>
#include <iomanip>
#include <sstream>
#include <iostream>

#include "Var.h"

class Function {
	public:
		Function(std::string name);
		~Function();
		void setName(std::string n);
		std::string getName();
		bool existsVariable(const std::string &varname) const ;
		void addVariable(Var* var);
		Var* getVariable(const std::string &varname) const;
		void addParam(Var* v);
		void dump();
		void save(int funcstart);
		void end();
		int getNumParam();
		int getNumVars();
		int getFuncStart();
		std::string toHex(int i);
	private:
		std::string name;
		std::vector<Var*> params;
		typedef std::map<std::string, Var*> Var_Store;
		Var_Store variables;
		int num_vars;
		int func_start;
};
