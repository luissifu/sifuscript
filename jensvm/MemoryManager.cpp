#include "MemoryManager.h"

MemoryManager::MemoryManager() {}

void MemoryManager::init(FILE* file) {
	global.init(file);
	local.init(file);
	temp.init(file);
}

void MemoryManager::dump() {
	global.dump();
	local.dump();
	temp.dump();
}

void MemoryManager::write(int address, bool value) {
	if (address >= 0 && address < block_size)
		global.write(address, value);
	else if (address >= block_size && address < block_size*2)
		local.write(address - block_size, value);
	else if (address >= block_size*2 && address < block_size*3)
		local.write(address - block_size*2, value);
	else
		printf("Access of invalid address\n");
}

void MemoryManager::write(int address, char value) {
	if (address >= 0 && address < block_size)
		global.write(address, value);
	else if (address >= block_size && address < block_size*2)
		local.write(address - block_size, value);
	else if (address >= block_size*2 && address < block_size*3)
		local.write(address - block_size*2, value);
	else
		printf("Access of invalid address\n");
}

void MemoryManager::write(int address, short value) {
	if (address >= 0 && address < block_size)
		global.write(address, value);
	else if (address >= block_size && address < block_size*2)
		local.write(address - block_size, value);
	else if (address >= block_size*2 && address < block_size*3)
		local.write(address - block_size*2, value);
	else
		printf("Access of invalid address\n");
}

void MemoryManager::write(int address, int value) {
	if (address >= 0 && address < block_size)
		global.write(address, value);
	else if (address >= block_size && address < block_size*2)
		local.write(address - block_size, value);
	else if (address >= block_size*2 && address < block_size*3)
		local.write(address - block_size*2, value);
	else
		printf("Access of invalid address\n");
}

void MemoryManager::write(int address, long value) {
	if (address >= 0 && address < block_size)
		global.write(address, value);
	else if (address >= block_size && address < block_size*2)
		local.write(address - block_size, value);
	else if (address >= block_size*2 && address < block_size*3)
		local.write(address - block_size*2, value);
	else
		printf("Access of invalid address\n");
}

void MemoryManager::write(int address, float value) {
	if (address >= 0 && address < block_size)
		global.write(address, value);
	else if (address >= block_size && address < block_size*2)
		local.write(address - block_size, value);
	else if (address >= block_size*2 && address < block_size*3)
		local.write(address - block_size*2, value);
	else
		printf("Access of invalid address\n");
}

void MemoryManager::write(int address, double value) {
	if (address >= 0 && address < block_size)
		global.write(address, value);
	else if (address >= block_size && address < block_size*2)
		local.write(address - block_size, value);
	else if (address >= block_size*2 && address < block_size*3)
		local.write(address - block_size*2, value);
	else
		printf("Access of invalid address\n");
}

void MemoryManager::write(int address, std::string value) {
	if (address >= 0 && address < block_size)
		global.write(address, value);
	else if (address >= block_size && address < block_size*2)
		local.write(address - block_size, value);
	else if (address >= block_size*2 && address < block_size*3)
		local.write(address - block_size*2, value);
	else
		printf("Access of invalid address\n");
}
