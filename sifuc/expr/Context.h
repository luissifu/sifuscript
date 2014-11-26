#ifndef CONTEXT_H
#define CONTEXT_H

#include <vector>
#include <iostream>
#include <stdio.h>
#include "../proc/Function.h"
#include "../except/Exceptions.h"

/**************************************************************************************************************************************************/
/***** CONTEXT specific stuff - contection of variable Tables and so on *****/
/** Calculator context used to save the parsed expressions. This context is
 * passed along to the ss::Driver class and fill during parsing via bison
 * actions. So that via Driver every Element of the abract Syntaxtree or BISON/FLEX can access the context
 */

struct CurrentFunction {
	Function* func;
	int param;
};

class SifuContext
{
	public:
		// free the saved expression trees
		SifuContext();
		~SifuContext();
		//limpia los news
		void clearExpressions();
		//regresa si existe una variable
		bool existsVariable(const std::string &varname) const;
		//agrega una variable
		void addVariable(Var* var);
		//agrega una constante (diferente lugar)
		void addConst(Var* var);
		//obtiene variable si existe
		Var* getVariable(const std::string &varname) const;
		//regresa si existe una funcion
		bool existsFunction(const std::string& funcname);
		//agrega una funcion
		void addFunction(Function* f);
		//obtiene la funcion si existe
		Function* getFunction(const std::string& funcname);
		//cambia al contexto global
		void swapGlobalContext();
		//agrega un parametro
		void addParam(Var* v);
		//guarda la funcion
		void save(int func);
		//limpia las variables
		void end();
		//si es global o no el contexto actual
		bool isGlobal();
		//guarda los datos en el archivo
		void dump(FILE* file);
		//si es de tipo void el contexto actual
		bool is_void();
		//obtiene la direccion del contexto actual
		int getAddress();
	private:
		typedef std::vector<Function*> Func_Store;
		Func_Store functions;
		Function* currCtx;
};

#endif // CONTEXT_H
