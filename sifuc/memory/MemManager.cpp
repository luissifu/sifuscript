#include "MemManager.h"

MemManager::MemManager() {
	global.setName("global");
	local.setName("local");
	local.setOffset(global.getBlockSize());
	temp.setName("temp");
	temp.setOffset(global.getBlockSize() + local.getBlockSize());
}

void MemManager::clear(int which) {
	switch(which)
	{
		case MEM_GLOBAL:
			global.clear();
			break;

		case MEM_LOCAL:
			local.clear();
			break;

		case MEM_TEMP:
			temp.clear();
			break;
	}
}

int MemManager::request(int type, int from) {
	switch(type)
	{
		case VARTYPE_BOOL:
			return requestBool(from);
		case VARTYPE_CHAR:
			return requestChar(from);
		case VARTYPE_SHORT:
			return requestShort(from);
		case VARTYPE_INT:
			return requestInt(from);
		case VARTYPE_LONG:
			return requestLong(from);
		case VARTYPE_FLOAT:
			return requestFloat(from);
		case VARTYPE_DOUBLE:
			return requestDouble(from);
		case VARTYPE_STRING:
			return requestString(from);
	}
}

int MemManager::requestBool(int from) {
	switch (from)
	{
		case MEM_GLOBAL:
			return global.add(TYPE_BOOL);

		case MEM_LOCAL:
			return local.add(TYPE_BOOL);

		case MEM_TEMP:
			return temp.add(TYPE_BOOL);

		default:
			return -1;
	}
}

int MemManager::requestChar(int from) {
	switch (from)
	{
		case MEM_GLOBAL:
			return global.add(TYPE_CHAR);

		case MEM_LOCAL:
			return local.add(TYPE_CHAR);

		case MEM_TEMP:
			return temp.add(TYPE_CHAR);

		default:
			return -1;
	}
}

int MemManager::requestShort(int from) {
	switch (from)
	{
		case MEM_GLOBAL:
			return global.add(TYPE_SHORT);

		case MEM_LOCAL:
			return local.add(TYPE_SHORT);

		case MEM_TEMP:
			return temp.add(TYPE_SHORT);

		default:
			return -1;
	}
}

int MemManager::requestInt(int from) {
	switch (from)
	{
		case MEM_GLOBAL:
			return global.add(TYPE_INT);

		case MEM_LOCAL:
			return local.add(TYPE_INT);

		case MEM_TEMP:
			return temp.add(TYPE_INT);

		default:
			return -1;
	}
}

int MemManager::requestLong(int from) {
	switch (from)
	{
		case MEM_GLOBAL:
			return global.add(TYPE_LONG);

		case MEM_LOCAL:
			return local.add(TYPE_LONG);

		case MEM_TEMP:
			return temp.add(TYPE_LONG);

		default:
			return -1;
	}
}

int MemManager::requestFloat(int from) {
	switch (from)
	{
		case MEM_GLOBAL:
			return global.add(TYPE_FLOAT);

		case MEM_LOCAL:
			return local.add(TYPE_FLOAT);

		case MEM_TEMP:
			return temp.add(TYPE_FLOAT);

		default:
			return -1;
	}
}

int MemManager::requestDouble(int from) {
	switch (from)
	{
		case MEM_GLOBAL:
			return global.add(TYPE_DOUBLE);

		case MEM_LOCAL:
			return local.add(TYPE_DOUBLE);

		case MEM_TEMP:
			return temp.add(TYPE_DOUBLE);

		default:
			return -1;
	}
}

int MemManager::requestString(int from) {
	switch (from)
	{
		case MEM_GLOBAL:
			return global.add(TYPE_STR);

		case MEM_LOCAL:
			return local.add(TYPE_STR);

		case MEM_TEMP:
			return temp.add(TYPE_STR);

		default:
			return -1;
	}
}
