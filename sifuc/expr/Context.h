#ifndef CONTEXT_H
#define CONTEXT_H

#include <vector>
#include <iostream>
#include "../proc/Function.h"
#include "../except/Exceptions.h"

/**************************************************************************************************************************************************/
/***** CONTEXT specific stuff - contection of variable Tables and so on *****/
/** Calculator context used to save the parsed expressions. This context is
 * passed along to the ss::Driver class and fill during parsing via bison
 * actions. So that via Driver every Element of the abract Syntaxtree or BISON/FLEX can access the context
 */
class SifuContext
{
	public:
		// free the saved expression trees
		SifuContext();
		~SifuContext();
		void clearExpressions();
		bool existsVariable(const std::string &varname) const;
		void addVariable(Var* var);
		Var* getVariable(const std::string &varname) const;
		void dump();
		bool existsFunction(const std::string& funcname);
		void addFunction(Function* f);
		Function* getFunction(const std::string& funcname);
		void swapGlobalContext();
	private:
		typedef std::vector<Function*> Func_Store;
		Func_Store functions;
		Function* currCtx;
};

#endif // CONTEXT_H
