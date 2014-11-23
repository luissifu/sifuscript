#pragma once

#include <map>
#include <vector>
#include <string>
#include <iomanip>
#include <sstream>
#include <iostream>
#include <stdio.h>

#include "Var.h"

class Function {
	public:
		Function(std::string name, int type, int address);
		~Function();
		void setName(std::string n);
		std::string getName();
		bool existsVariable(const std::string &varname) const ;
		void addVariable(Var* var);
		Var* getVariable(const std::string &varname) const;
		void addParam(Var* v);
		void dump(FILE* file);
		void save(int funcstart);
		void end();
		int getNumParams();
		int getNumVars();
		int getFuncStart();
		int getType();
		int getAddress();
		bool checkParam(int type, int num);
		std::string toHex(int i);
	private:
		std::string name;
		std::vector<Var*> params;
		typedef std::map<std::string, Var*> Var_Store;
		Var_Store variables;
		int num_vars;
		int func_start;
		int type;
		int address;
};
