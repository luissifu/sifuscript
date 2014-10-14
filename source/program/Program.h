#pragma once

#include <string>
#include <vector>

class Program {
	public:
		Program();
		Program(std::string name);
		void save();
		void createStatement();
	private:
		std::vector<Statement> statlist;
		std::string name;
};
