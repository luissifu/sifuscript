#include "Driver.h"

Driver::Driver(FILE* infile, bool sf) {
	fseek(infile, 0, SEEK_END);
	file_end = ftell(infile);
	fseek(infile, 0, SEEK_SET);

	file = infile;
	ins_ptr = 0;
	show_flow = sf;
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

	//execute program
	while (ftell(file) < file_end)
	{
		fread(&op, sizeof(char), 1, file);
		fread(&left, sizeof(int), 1, file);
		fread(&right, sizeof(int), 1, file);
		fread(&res, sizeof(int), 1, file);

		std::cout << opnames[op] << " " << left << " " << right << " " << res << std::endl;
	}

	memory.dump();

	return true;
}
