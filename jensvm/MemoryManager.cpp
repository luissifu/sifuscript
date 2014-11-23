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

data_type MemoryManager::read(int address) {
	if (address >= 0 && address < block_size)
		return global.read(address);
	else if (address >= block_size && address < block_size*2)
		return local.read(address - block_size);
	else if (address >= block_size*2 && address < block_size*3)
		return temp.read(address - block_size*2);
	else if (address != -1)
		printf("Access of invalid address\n");
}

void MemoryManager::write(int address, bool value) {
	if (address >= 0 && address < block_size)
		global.write(address, value);
	else if (address >= block_size && address < block_size*2)
		local.write(address - block_size, value);
	else if (address >= block_size*2 && address < block_size*3)
		temp.write(address - block_size*2, value);
	else if (address != -1)
		printf("Access of invalid address\n");
}

void MemoryManager::write(int address, char value) {
	if (address >= 0 && address < block_size)
		global.write(address, value);
	else if (address >= block_size && address < block_size*2)
		local.write(address - block_size, value);
	else if (address >= block_size*2 && address < block_size*3)
		temp.write(address - block_size*2, value);
	else if (address != -1)
		printf("Access of invalid address\n");
}

void MemoryManager::write(int address, short value) {
	if (address >= 0 && address < block_size)
		global.write(address, value);
	else if (address >= block_size && address < block_size*2)
		local.write(address - block_size, value);
	else if (address >= block_size*2 && address < block_size*3)
		temp.write(address - block_size*2, value);
	else if (address != -1)
		printf("Access of invalid address\n");
}

void MemoryManager::write(int address, int value) {
	if (address >= 0 && address < block_size)
		global.write(address, value);
	else if (address >= block_size && address < block_size*2)
		local.write(address - block_size, value);
	else if (address >= block_size*2 && address < block_size*3)
		temp.write(address - block_size*2, value);
	else if (address != -1)
		printf("Access of invalid address\n");
}

void MemoryManager::write(int address, long value) {
	if (address >= 0 && address < block_size)
		global.write(address, value);
	else if (address >= block_size && address < block_size*2)
		local.write(address - block_size, value);
	else if (address >= block_size*2 && address < block_size*3)
		temp.write(address - block_size*2, value);
	else if (address != -1)
		printf("Access of invalid address\n");
}

void MemoryManager::write(int address, float value) {
	if (address >= 0 && address < block_size)
		global.write(address, value);
	else if (address >= block_size && address < block_size*2)
		local.write(address - block_size, value);
	else if (address >= block_size*2 && address < block_size*3)
		temp.write(address - block_size*2, value);
	else if (address != -1)
		printf("Access of invalid address\n");
}

void MemoryManager::write(int address, double value) {
	if (address >= 0 && address < block_size)
		global.write(address, value);
	else if (address >= block_size && address < block_size*2)
		local.write(address - block_size, value);
	else if (address >= block_size*2 && address < block_size*3)
		temp.write(address - block_size*2, value);
	else if (address != -1)
		printf("Access of invalid address\n");
}

void MemoryManager::write(int address, std::string value) {
	if (address >= 0 && address < block_size)
		global.write(address, value);
	else if (address >= block_size && address < block_size*2)
		local.write(address - block_size, value);
	else if (address >= block_size*2 && address < block_size*3)
		temp.write(address - block_size*2, value);
	else if (address != -1)
		printf("Access of invalid address\n");
}
