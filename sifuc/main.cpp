/*
 * main.c file
 */

#include "expr/Expression.h"
#include "driver/Driver.h"
#include "program/Program.h"

#include <stdio.h>

#include <iostream>
#include <fstream>
#include <stdio.h>

static std::string substr_until(std::string str, char until) {
	bool found = false;
	int i;

	for (i = 0; i < str.size(); i++)
	{
		if (str[i] == until)
		{
			found = true;
			break;
		}
	}

	return found?str.substr(0,i):str;
}


int main(int argc, char *argv[])
{
	SifuContext context;
	Program prog;
	ss::Driver driver(context, prog);
	bool readfile = false;

	for(int ai = 1; ai < argc; ++ai)
	{
		if (argv[ai] == std::string ("-p"))
		{
			driver.trace_parsing = true;
		}
		else if (argv[ai] == std::string ("-s"))
		{
			driver.trace_scanning = true;
		}
		else
		{
			// read a file with expressions

			std::fstream infile(argv[ai]);
			if (!infile.good())
			{
				std::cerr << "Could not open file: " << argv[ai] << std::endl;
				return 0;
			}

			bool result = driver.parse_stream(infile, argv[ai]);
			if (result)
			{
				std::string outname = substr_until(std::string(argv[ai]),'.') + ".jns";
				//std::ofstream outfile(outname.c_str());
				FILE* outfile;
				outfile = fopen(outname.c_str(), "wb");

				std::cout << "Writing to " << outname << "..." << std::endl;

				//driver.context.dump();
				driver.memory.dump(outfile);
				driver.saveconsts(outfile);
				driver.program.write(outfile);

				fclose(outfile);
			}

			readfile = true;
		}
	}

	if (readfile) return 0;

	std::cout << "Reading Code from stdin" << std::endl;

	std::string line;
	while( std::cout << "input: " && std::getline(std::cin, line) && !line.empty() )
	{
		bool result = driver.parse_string(line, "input");
		if (result)
		{
			std::cout << "Compiled Succesfully" << std::endl;
		}
	}
}
