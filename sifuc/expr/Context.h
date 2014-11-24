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
		void clearExpressions();
		bool existsVariable(const std::string &varname) const;
		void addVariable(Var* var);
		void addConst(Var* var);
		Var* getVariable(const std::string &varname) const;
		bool existsFunction(const std::string& funcname);
		void addFunction(Function* f);
		Function* getFunction(const std::string& funcname);
		void swapGlobalContext();
		void addParam(Var* v);
		void save(int func);
		void end();
		bool isGlobal();
		void dump(FILE* file);
		bool is_void();
		int getAddress();
	private:
		typedef std::vector<Function*> Func_Store;
		Func_Store functions;
		Function* currCtx;
};

#endif // CONTEXT_H
