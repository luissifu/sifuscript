#include "MemManager.h"

MemManager::MemManager() {
	global.setName("global");
	local.setName("local");
	temp.setName("temp");
}

int MemManager::requestChar(int from) {
	switch (from)
	{
		case MEM_GLOBAL:
			global.add(TYPE_CHAR);
			break;

		case MEM_LOCAL:
			local.add(TYPE_CHAR);
			break;

		case MEM_TEMP:
			temp.add(TYPE_CHAR);
			break;

		default:
			break;
	}
}

int MemManager::requestShort(int from) {
	switch (from)
	{
		case MEM_GLOBAL:
			global.add(TYPE_SHORT);
			break;

		case MEM_LOCAL:
			local.add(TYPE_SHORT);
			break;

		case MEM_TEMP:
			temp.add(TYPE_SHORT);
			break;

		default:
			break;
	}
}

int MemManager::requestInt(int from) {
	switch (from)
	{
		case MEM_GLOBAL:
			global.add(TYPE_INT);
			break;

		case MEM_LOCAL:
			local.add(TYPE_INT);
			break;

		case MEM_TEMP:
			temp.add(TYPE_INT);
			break;

		default:
			break;
	}
}

int MemManager::requestLong(int from) {
	switch (from)
	{
		case MEM_GLOBAL:
			global.add(TYPE_LONG);
			break;

		case MEM_LOCAL:
			local.add(TYPE_LONG);
			break;

		case MEM_TEMP:
			temp.add(TYPE_LONG);
			break;

		default:
			break;
	}
}

int MemManager::requestFloat(int from) {
	switch (from)
	{
		case MEM_GLOBAL:
			global.add(TYPE_FLOAT);
			break;

		case MEM_LOCAL:
			local.add(TYPE_FLOAT);
			break;

		case MEM_TEMP:
			temp.add(TYPE_FLOAT);
			break;

		default:
			break;
	}
}

int MemManager::requestDouble(int from) {
	switch (from)
	{
		case MEM_GLOBAL:
			global.add(TYPE_DOUBLE);
			break;

		case MEM_LOCAL:
			local.add(TYPE_DOUBLE);
			break;

		case MEM_TEMP:
			temp.add(TYPE_DOUBLE);
			break;

		default:
			break;
	}
}

int MemManager::requestString(int from) {
	switch (from)
	{
		case MEM_GLOBAL:
			global.add(TYPE_STR);
			break;

		case MEM_LOCAL:
			local.add(TYPE_STR);
			break;

		case MEM_TEMP:
			temp.add(TYPE_STR);
			break;

		default:
			break;
	}
}
