#include "Memory.h"

Memory::Memory() {
	bool_qty = char_qty = short_qty = int_qty = long_qty = float_qty = double_qty = str_qty = add_qty = 0;

	bool_storage = NULL;
	char_storage = NULL;
	short_storage = NULL;
	int_storage = NULL;
	long_storage = NULL;
	float_storage = NULL;
	double_storage = NULL;
	add_storage = NULL;
}

Memory::~Memory() {
	if (initialized)
	{
		delete[] bool_storage;
		delete[] char_storage;
		delete[] short_storage;
		delete[] int_storage;
		delete[] long_storage;
		delete[] float_storage;
		delete[] double_storage;
		delete[] add_storage;
	}
}

data_type Memory::read(int num) {
	data_type var;

	int char_lo = MAX_TYPES * bool_size;
	int short_lo = char_lo + MAX_TYPES * char_size;
	int int_lo = short_lo + MAX_TYPES * short_size;
	int long_lo = int_lo + MAX_TYPES * int_size;
	int float_lo = long_lo + MAX_TYPES * long_size;
	int double_lo = float_lo + MAX_TYPES * float_size;
	int add_lo = double_lo + MAX_TYPES * double_size;
	int str_lo = add_lo + MAX_TYPES * address_size;

	//printf("num: %d\n", num);

	if (num >= 0 && num < char_lo)
	{
		var.type = TYPE_BOOL;
		var.data = (void*)&bool_storage[num];
	}
	else if (num >= char_lo && num < short_lo)
	{
		int offset = (num - char_lo)/char_size;

		var.type = TYPE_CHAR;
		var.data = (void*)&char_storage[offset];
	}
	else if (num >= short_lo && num < int_lo)
	{
		int offset = (num - short_lo)/short_size;

		var.type = TYPE_SHORT;
		var.data = (void*)&short_storage[offset];
	}
	else if (num >= int_lo && num < long_lo)
	{
		int offset = (num - int_lo)/int_size;

		var.type = TYPE_INT;
		var.data = (void*)&int_storage[offset];
	}
	else if (num >= long_lo && num < float_lo)
	{
		int offset = (num - long_lo)/long_size;

		var.type = TYPE_LONG;
		var.data = (void*)&long_storage[offset];
	}
	else if (num >= float_lo && num < double_lo)
	{
		int offset = (num - float_lo)/float_size;

		var.type = TYPE_FLOAT;
		var.data = (void*)&float_storage[offset];
	}
	else if (num >= double_lo && num < add_lo)
	{
		int offset = (num - double_lo)/double_size;

		var.type = TYPE_DOUBLE;
		var.data = (void*)&double_storage[offset];
	}
	else if (num >= add_lo && num < str_lo)
	{
		int offset = (num - add_lo)/(address_size);

		var.type = TYPE_ADDRESS;
		var.data = (void*)&add_storage[offset];
	}
	else
	{
		int offset = (num - str_lo)/(char_size * MAX_STRING_SIZE);

		var.type = TYPE_STR;
		var.data = (void*)&str_storage[offset];
	}

	return var;
}

void Memory::init(FILE* file, bool init) {
	fread(&bool_qty, sizeof(int), 1, file);
	fread(&char_qty, sizeof(int), 1, file);
	fread(&short_qty, sizeof(int), 1, file);
	fread(&int_qty, sizeof(int), 1, file);
	fread(&long_qty, sizeof(int), 1, file);
	fread(&float_qty, sizeof(int), 1, file);
	fread(&double_qty, sizeof(int), 1, file);
	fread(&add_qty, sizeof(int), 1, file);
	fread(&str_qty, sizeof(int), 1, file);

	//dump();

	initialized = init;

	if (init)
	{
		bool_storage = new bool[bool_qty];
		char_storage = new char[char_qty];
		short_storage = new short[short_qty];
		int_storage = new int[int_qty];
		long_storage = new long[long_qty];
		float_storage = new float[float_qty];
		double_storage = new double[double_qty];
		add_storage = new int[add_qty];

		for (int i = 0; i < str_qty; i++)
			str_storage.push_back("");
	}
}

void Memory::copy(const Memory* other) {
	bool_qty = other->bool_qty;
	char_qty = other->char_qty;
	int_qty = other->int_qty;
	short_qty = other->short_qty;
	long_qty = other->long_qty;
	float_qty = other->float_qty;
	double_qty = other->double_qty;
	str_qty = other->str_qty;
	add_qty = other->add_qty;

	initialized = true;

	bool_storage = new bool[bool_qty];
	char_storage = new char[char_qty];
	short_storage = new short[short_qty];
	int_storage = new int[int_qty];
	long_storage = new long[long_qty];
	float_storage = new float[float_qty];
	double_storage = new double[double_qty];
	add_storage = new int[add_qty];

	for (int i = 0; i < str_qty; i++)
		str_storage.push_back("");
}

void Memory::dump() {
	printf("--\n");
	printf("Bool qty: %d\n", bool_qty);
	printf("Char qty: %d\n", char_qty);
	printf("Shrt qty: %d\n", short_qty);
	printf("Int  qty: %d\n", int_qty);
	printf("Long qty: %d\n", long_qty);
	printf("Flt  qty: %d\n", float_qty);
	printf("Doub qty: %d\n", double_qty);
	printf("Str  qty: %d\n", str_qty);
	printf("Add  qty: %d\n", add_qty);

	int full_block = MAX_TYPES * bool_size
					+ MAX_TYPES * char_size
					+ MAX_TYPES * short_size
					+ MAX_TYPES * int_size
					+ MAX_TYPES * long_size
					+ MAX_TYPES * float_size
					+ MAX_TYPES * double_size
					+ MAX_TYPES * address_size
					+ MAX_TYPES * MAX_STRING_SIZE;

	printf("Full size is: [%d/%d]\n", full_block, block_size);
}

void Memory::write(int num, bool value) {
	bool_storage[num] = value;
}

void Memory::write(int num, char value) {
	int offset = (num - MAX_TYPES * bool_size)/char_size;

	char_storage[offset] = value;
}

void Memory::write(int num, short value) {
	int offset = (num - MAX_TYPES * bool_size
					- MAX_TYPES * char_size)/short_size;

	short_storage[offset] = value;
}

void Memory::write(int num, int value) {
	int offset = (num - MAX_TYPES * bool_size
					- MAX_TYPES * char_size
					- MAX_TYPES * short_size)/int_size;

	int_storage[offset] = value;
}

void Memory::write(int num, long value) {
	int offset = (num - MAX_TYPES * bool_size
					- MAX_TYPES * char_size
					- MAX_TYPES * short_size
					- MAX_TYPES * int_size)/long_size;

	long_storage[offset] = value;
}

void Memory::write(int num, float value) {
	int offset = (num - MAX_TYPES * bool_size
					- MAX_TYPES * char_size
					- MAX_TYPES * short_size
					- MAX_TYPES * int_size
					- MAX_TYPES * long_size)/float_size;

	float_storage[offset] = value;
}

void Memory::write(int num, double value) {
	int offset = (num - MAX_TYPES * bool_size
					- MAX_TYPES * char_size
					- MAX_TYPES * short_size
					- MAX_TYPES * int_size
					- MAX_TYPES * long_size
					- MAX_TYPES * float_size)/double_size;

	double_storage[offset] = value;
}

/*
void Memory::write(int num, int value) {
	int offset = (num - MAX_TYPES * bool_size
					- MAX_TYPES * char_size
					- MAX_TYPES * short_size
					- MAX_TYPES * int_size
					- MAX_TYPES * long_size
					- MAX_TYPES * float_size
					- MAX_TYPES * double_size)/address_size;

	add_storage[offset] = value;
}
*/

void Memory::write(int num, char* value) {
	int offset = (num - MAX_TYPES * bool_size
					- MAX_TYPES * char_size
					- MAX_TYPES * short_size
					- MAX_TYPES * int_size
					- MAX_TYPES * long_size
					- MAX_TYPES * float_size
					- MAX_TYPES * double_size
					- MAX_TYPES * address_size)/(char_size * MAX_STRING_SIZE);

	std::string new_str(value);

	str_storage[offset] = new_str;
}
