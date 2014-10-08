// $Id: driver.cc 39 2008-08-03 10:07:15Z tb $
/** \file driver.cc Implementation of the example::Driver class. */

#include <fstream>
#include <sstream>

#include "driver.h"
#include "tokens.h"

namespace sifuscript {

	Driver::Driver()
		: trace_scanning(false),
		trace_parsing(false)
	{
	}

	bool Driver::parse_stream(std::istream& in, const std::string& sname)
	{
		streamname = sname;

		Token scanner(&in);
		scanner.set_debug(trace_scanning);
		this->lexer = &scanner;

		Gramatica parser(*this);
		parser.set_debug_level(trace_parsing);
		return (parser.parse() == 0);
	}

	bool Driver::parse_file(const std::string &filename)
	{
		std::ifstream in(filename.c_str());
		if (!in.good()) 
			return false;
		return parse_stream(in, filename);
	}

	bool Driver::parse_string(const std::string &input, const std::string& sname)
	{
		std::istringstream iss(input);
		return parse_stream(iss, sname);
	}

	void Driver::error(const class location& l, const std::string& m)
	{
		std::cerr << l << ": " << m << std::endl;
	}

	void Driver::error(const std::string& m)
	{
		std::cerr << m << std::endl;
	}

} // namespace example
