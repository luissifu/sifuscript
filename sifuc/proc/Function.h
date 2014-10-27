#pragma once

#include <map>
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
		void dump();
		std::string toHex(int i);
	private:
		std::string name;
		typedef std::map<std::string, Var*> Var_Store;
		Var_Store variables;
};