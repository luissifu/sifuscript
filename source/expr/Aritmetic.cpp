#include "Aritmetic.h"
#include <iostream>

Aritmetic::Aritmetic() {}

int Aritmetic::isValid(char op, int leftype, int righttype) {
	return semantic_cube[leftype][righttype][op - OP_ADD];
}
