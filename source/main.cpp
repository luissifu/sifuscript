/*
 * main.c file
 */

#include "expr/Expression.h"
#include "driver/Driver.h"
#include "program/Program.h"

#include <stdio.h>

#include <iostream>
#include <fstream>


int main(int argc, char *argv[])
{
	SifuContext context;
	Program object;
	ss::Driver driver(context, object);
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
				std::cout << "Compiled Succesfully" << std::endl;
				driver.context.dump();
				driver.program.save();
			}
			else
			{
				std::cout << "Error detected" << std::endl;
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
