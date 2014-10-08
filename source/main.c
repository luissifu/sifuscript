/*
 * main.c file
 */
 
#include "Expression.h"
#include "Driver.h"
 
#include <stdio.h>


#include <iostream>
#include <fstream>


int main(int argc, char *argv[])
{
    sifuscript::Driver driver;
    bool readfile = false;

    for(int ai = 1; ai < argc; ++ai)
    {
	if (argv[ai] == std::string ("-p")) {
	    driver.trace_parsing = true;
	}
	else if (argv[ai] == std::string ("-s")) {
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
		std::cout << "Mi_Patito:" << std::endl;
		
	    }

	    readfile = true;
	}
    }

    if (readfile) return 0;
    
    std::cout << "Reading Code from stdin" << std::endl;

    std::string line;
    while( std::cout << "input: " &&
	   std::getline(std::cin, line) &&
	   !line.empty() )
    {
		
		bool result = driver.parse_string(line, "input");

		if (result)
		{
			
		}
    }
}
