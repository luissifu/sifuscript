#include "Driver.h"

Driver::Driver(FILE* infile, bool sf) {
	fseek(infile, 0, SEEK_END);
	file_end = ftell(infile);
	fseek(infile, 0, SEEK_SET);

	file = infile;
	ins_ptr = 0;
	show_flow = sf;

	parser.setMemory(&memory);
}

Driver::~Driver() {}

bool Driver::run() {
	char op;
	int left;
	int right;
	int res;

	//initialize memory
	memory.init(file);

	//read constants
	int const_qty, type, address;

	fread(&const_qty, sizeof(int), 1, file);

	for (int i = 0; i < const_qty; i++)
	{
		fread(&type, sizeof(int), 1, file);
		fread(&address, sizeof(int), 1, file);

		switch(type)
		{
			case TYPE_BOOL:
				{
					bool value;
					fread(&value, sizeof(bool), 1, file);

					memory.write(address, value);
				}
				break;

			case TYPE_CHAR:
				{
					char value;
					fread(&value, sizeof(char), 1, file);

					memory.write(address, value);
				}
				break;

			case TYPE_LONG:
				{
					long value;
					fread(&value, sizeof(long), 1, file);

					memory.write(address, value);
				}
				break;

			case TYPE_DOUBLE:
				{
					double value;
					fread(&value, sizeof(double), 1, file);

					memory.write(address, value);
				}
				break;

			case TYPE_STR:
				break;

		}
	}

	//functions
	int func_qty, param_qty, param_add;

	fread(&func_qty, sizeof(int), 1, file);

	for (int i = 0; i < func_qty; i++)
	{
		fread(&param_qty, sizeof(int), 1, file);

		for (int j = 0; j < param_qty; j++)
		{
			fread(&param_add, sizeof(int), 1, file);
		}
	}

	//execute program
	int prog_start = ftell(file);
	int register_size = sizeof(char) + 3 * sizeof(int);

	while (ftell(file) < file_end)
	{
		fseek(file, prog_start + ins_ptr * register_size, SEEK_SET);

		fread(&op, sizeof(char), 1, file);
		fread(&left, sizeof(int), 1, file);
		fread(&right, sizeof(int), 1, file);
		fread(&res, sizeof(int), 1, file);

		parser.execute_line(op, left, right, res, ins_ptr);
	}

	//memory.dump();

	printf("\n");

	return true;
}
