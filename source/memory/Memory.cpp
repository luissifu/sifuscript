#include "Memory.h"

Memory::Memory() {}

Memory::setName(std::string name) {
	this->name = name;
}

void Memory::add(int type) {
	switch(type)
	{
		case TYPE_CHAR:
		case TYPE_SHORT:
		case TYPE_INT:
		case TYPE_LONG:
		case TYPE_FLOAT:
		case TYPE_DOUBLE:
		case TYPE_STR:
			break;
	}
}
