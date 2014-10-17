#pragma once
#include <exception>

class CompilerException : public std::exception {
	public:
		CompilerException(const char* message) {
			mssg = message;
		}
		virtual ~CompilerException() throw() { }
		virtual const char* what() const throw () {
			return mssg;
		}
	private:
		const char* mssg;
};
