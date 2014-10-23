#include "Expression.h"
#include <iostream>

Expression::Expression() {}

int Expression::isValid(char op, int leftype, int righttype) {
	return semantic_cube[leftype][righttype][op - OP_ADD];
}
