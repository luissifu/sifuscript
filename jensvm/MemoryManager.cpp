#include "MemoryManager.h"

MemoryManager::MemoryManager() {
	selected_local = 0;
}

MemoryManager::~MemoryManager() {
	for (int i = 0; i < local_mems.size(); i++)
		delete local_mems[i];

	local_mems.clear();
}

void MemoryManager::init(FILE* file) {
	global.init(file);

	Memory* local_base = new Memory();
	local_base->init(file, false);
	local_mems.push_back(local_base);

	temp.init(file);
}

void MemoryManager::dump() {
	global.dump();
	//local.dump();
	temp.dump();
}

void MemoryManager::expand_mem() {
	Memory* new_local = new Memory();
	new_local->copy(local_mems[0]);

	local_mems.push_back(new_local);
	selected_local++;

	//printf("Selected local [%d]\n", selected_local);
}

void MemoryManager::free_mem() {
	Memory* del_local = local_mems[selected_local];
	local_mems.pop_back();
	delete del_local;
	selected_local--;
}

data_type MemoryManager::read(int address) {
	if (address >= 0 && address < block_size)
		return global.read(address);
	else if (address >= block_size && address < block_size*2)
	{
		if (selected_local > 1)
			return local_mems[selected_local - 1]->read(address - block_size);
		else
			return local_mems[1]->read(address - block_size);
	}
	else if (address >= block_size*2 && address < block_size*3)
		return temp.read(address - block_size*2);
	else if (address != -1)
		printf("Access of invalid address\n");
}

data_type MemoryManager::read_sp(int address) {
	if (address >= block_size && address < block_size*2)
		return local_mems[selected_local]->read(address - block_size);
	else
		printf("Access of invalid address\n");
}

void MemoryManager::write(int address, bool value) {
	if (address >= 0 && address < block_size)
		global.write(address, value);
	else if (address >= block_size && address < block_size*2)
		local_mems[selected_local]->write(address - block_size, value);
	else if (address >= block_size*2 && address < block_size*3)
		temp.write(address - block_size*2, value);
	else if (address != -1)
		printf("Access of invalid address\n");
}

void MemoryManager::write(int address, char value) {
	if (address >= 0 && address < block_size)
		global.write(address, value);
	else if (address >= block_size && address < block_size*2)
		local_mems[selected_local]->write(address - block_size, value);
	else if (address >= block_size*2 && address < block_size*3)
		temp.write(address - block_size*2, value);
	else if (address != -1)
		printf("Access of invalid address\n");
}

void MemoryManager::write(int address, short value) {
	if (address >= 0 && address < block_size)
		global.write(address, value);
	else if (address >= block_size && address < block_size*2)
		local_mems[selected_local]->write(address - block_size, value);
	else if (address >= block_size*2 && address < block_size*3)
		temp.write(address - block_size*2, value);
	else if (address != -1)
		printf("Access of invalid address\n");
}

void MemoryManager::write(int address, int value) {
	if (address >= 0 && address < block_size)
		global.write(address, value);
	else if (address >= block_size && address < block_size*2)
		local_mems[selected_local]->write(address - block_size, value);
	else if (address >= block_size*2 && address < block_size*3)
		temp.write(address - block_size*2, value);
	else if (address != -1)
		printf("Access of invalid address\n");
}

void MemoryManager::write(int address, long value) {
	if (address >= 0 && address < block_size)
		global.write(address, value);
	else if (address >= block_size && address < block_size*2)
		local_mems[selected_local]->write(address - block_size, value);
	else if (address >= block_size*2 && address < block_size*3)
		temp.write(address - block_size*2, value);
	else if (address != -1)
		printf("Access of invalid address\n");
}

void MemoryManager::write(int address, float value) {
	if (address >= 0 && address < block_size)
		global.write(address, value);
	else if (address >= block_size && address < block_size*2)
		local_mems[selected_local]->write(address - block_size, value);
	else if (address >= block_size*2 && address < block_size*3)
		temp.write(address - block_size*2, value);
	else if (address != -1)
		printf("Access of invalid address\n");
}

void MemoryManager::write(int address, double value) {
	if (address >= 0 && address < block_size)
		global.write(address, value);
	else if (address >= block_size && address < block_size*2)
		local_mems[selected_local]->write(address - block_size, value);
	else if (address >= block_size*2 && address < block_size*3)
		temp.write(address - block_size*2, value);
	else if (address != -1)
		printf("Access of invalid address\n");
}

void MemoryManager::write(int address, char* value) {
	if (address >= 0 && address < block_size)
		global.write(address, value);
	else if (address >= block_size && address < block_size*2)
		local_mems[selected_local]->write(address - block_size, value);
	else if (address >= block_size*2 && address < block_size*3)
		temp.write(address - block_size*2, value);
	else if (address != -1)
		printf("Access of invalid address\n");
}
