#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <map>
#include <vector>
#include <ostream>
#include <stdexcept>

#include "../vars/Var.h"


/*Here we gonna start for the abstract syntaxtrees we create during the parsing(gramatica)**/
/** We gonna split it up in several documents which arebeeing conntected in this file later, when everything is becoming bigger*/
class BaseObject
{
	public:
		BaseObject()
		{
		}
};





/**************************************************************************************************************************************************/
/***** CONTEXT specific stuff - contection of variable Tables and so on *****/
/** Calculator context used to save the parsed expressions. This context is
 * passed along to the ss::Driver class and fill during parsing via bison
 * actions. So that via Driver every Element of the abract Syntaxtree or BISON/FLEX can access the context
 */
class SifuContext
{
public:

	//Map for storing vabriables
	typedef std::map<std::string, Var*> Var_Store;
	Var_Store variables;

	///Array of defined function
	typedef std::vector<BaseObject*> Func_Store;
	Func_Store	functions;

	// free the saved expression trees
	~SifuContext()
	{
		clearExpressions();
	}

	// free all saved expression trees
	void clearExpressions();

	// check if the given variable name exists in the storage
	bool existsVariable(const std::string &varname) const;
	
	// add a var
	void addVariable(Var* var);

	// return the given variable from the storage. throws an exception if it does not exist.
	Var* getVariable(const std::string &varname) const;
};

#endif // EXPRESSION_H
