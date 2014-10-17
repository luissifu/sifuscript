#pragma once

#include <stack>
#include "../vars/Var.h"
#include "../program/Statement.h"

const int NOT_VALID = -1;

const int semantic_cube[][8][14] = {
	{
		//BOOL BOOL
		//+			-			*			/			%			&&		||			<		>			<=			>=			==		!=			=
		{NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, NOT_VALID, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL},
		//BOOL CHAR
		{NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID},
		//BOOL SHORT
		{NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID},
		//BOOL INT
		{NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID},
		//BOOL LONG
		{NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID},
		//BOOL FLOAT
		{NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID},
		//BOOL DOUBLE
		{NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID},
		//BOOL STRING
		{VARTYPE_STRING, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID}
	},
	{
		//CHAR BOOL
		{NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID},
		//CHAR CHAR
		{VARTYPE_CHAR, VARTYPE_CHAR, VARTYPE_CHAR, VARTYPE_CHAR, VARTYPE_CHAR, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_CHAR},
		//CHAR SHORT
		{VARTYPE_SHORT, VARTYPE_SHORT, VARTYPE_SHORT, VARTYPE_SHORT, VARTYPE_SHORT, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_CHAR},
		//CHAR INT
		{VARTYPE_INT, VARTYPE_INT, VARTYPE_INT, VARTYPE_INT, VARTYPE_INT, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_CHAR},
		//CHAR LONG
		{VARTYPE_LONG, VARTYPE_LONG, VARTYPE_LONG, VARTYPE_LONG, VARTYPE_LONG, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_CHAR},
		//CHAR FLOAT
		{VARTYPE_FLOAT, VARTYPE_FLOAT, VARTYPE_FLOAT, VARTYPE_FLOAT, VARTYPE_FLOAT, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, NOT_VALID},
		//CHAR DOUBLE
		{VARTYPE_DOUBLE, VARTYPE_DOUBLE, VARTYPE_DOUBLE, VARTYPE_DOUBLE, VARTYPE_DOUBLE, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, NOT_VALID},
		//CHAR STRING
		{VARTYPE_STRING, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID}
	},
	{
		//SHORT BOOL
		{NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID},
		//SHORT CHAR
		{VARTYPE_SHORT, VARTYPE_SHORT, VARTYPE_SHORT, VARTYPE_SHORT, VARTYPE_SHORT, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_SHORT},
		//SHORT SHORT
		{VARTYPE_SHORT, VARTYPE_SHORT, VARTYPE_SHORT, VARTYPE_SHORT, VARTYPE_SHORT, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_SHORT},
		//SHORT INT
		{VARTYPE_INT, VARTYPE_INT, VARTYPE_INT, VARTYPE_INT, VARTYPE_INT, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_SHORT},
		//SHORT LONG
		{VARTYPE_LONG, VARTYPE_LONG, VARTYPE_LONG, VARTYPE_LONG, VARTYPE_LONG, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_SHORT},
		//SHORT FLOAT
		{VARTYPE_FLOAT, VARTYPE_FLOAT, VARTYPE_FLOAT, VARTYPE_FLOAT, VARTYPE_FLOAT, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, NOT_VALID},
		//SHORT DOUBLE
		{VARTYPE_DOUBLE, VARTYPE_DOUBLE, VARTYPE_DOUBLE, VARTYPE_DOUBLE, VARTYPE_DOUBLE, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, NOT_VALID},
		//SHORT STRING
		{VARTYPE_STRING, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID}
	},
	{
		//INT BOOL
		{NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID},
		//INT CHAR
		{VARTYPE_INT, VARTYPE_INT, VARTYPE_INT, VARTYPE_INT, VARTYPE_INT, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_INT},
		//INT SHORT
		{VARTYPE_INT, VARTYPE_INT, VARTYPE_INT, VARTYPE_INT, VARTYPE_INT, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_INT},
		//INT INT
		{VARTYPE_INT, VARTYPE_INT, VARTYPE_INT, VARTYPE_INT, VARTYPE_INT, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_INT},
		//INT LONG
		{VARTYPE_LONG, VARTYPE_LONG, VARTYPE_LONG, VARTYPE_LONG, VARTYPE_LONG, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_INT},
		//INT FLOAT
		{VARTYPE_FLOAT, VARTYPE_FLOAT, VARTYPE_FLOAT, VARTYPE_FLOAT, VARTYPE_FLOAT, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, NOT_VALID},
		//INT DOUBLE
		{VARTYPE_DOUBLE, VARTYPE_DOUBLE, VARTYPE_DOUBLE, VARTYPE_DOUBLE, VARTYPE_DOUBLE, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, NOT_VALID},
		//INT STRING
		{VARTYPE_STRING, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID}
	},
	{
		//LONG BOOL
		{NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID},
		//LONG CHAR
		{VARTYPE_LONG, VARTYPE_LONG, VARTYPE_LONG, VARTYPE_LONG, VARTYPE_LONG, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_LONG},
		//LONG SHORT
		{VARTYPE_LONG, VARTYPE_LONG, VARTYPE_LONG, VARTYPE_LONG, VARTYPE_LONG, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_LONG},
		//LONG INT
		{VARTYPE_LONG, VARTYPE_LONG, VARTYPE_LONG, VARTYPE_LONG, VARTYPE_LONG, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_LONG},
		//LONG LONG
		{VARTYPE_LONG, VARTYPE_LONG, VARTYPE_LONG, VARTYPE_LONG, VARTYPE_LONG, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_LONG},
		//LONG FLOAT
		{VARTYPE_FLOAT, VARTYPE_FLOAT, VARTYPE_FLOAT, VARTYPE_FLOAT, VARTYPE_FLOAT, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, NOT_VALID},
		//LONG DOUBLE
		{VARTYPE_DOUBLE, VARTYPE_DOUBLE, VARTYPE_DOUBLE, VARTYPE_DOUBLE, VARTYPE_DOUBLE, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, NOT_VALID},
		//LONG STRING
		{VARTYPE_STRING, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID}
	},
	{
		//FLOAT BOOL
		{NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID},
		//FLOAT CHAR
		{VARTYPE_FLOAT, VARTYPE_FLOAT, VARTYPE_FLOAT, VARTYPE_FLOAT, VARTYPE_FLOAT, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_FLOAT},
		//FLOAT SHORT
		{VARTYPE_FLOAT, VARTYPE_FLOAT, VARTYPE_FLOAT, VARTYPE_FLOAT, VARTYPE_FLOAT, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_FLOAT},
		//FLOAT INT
		{VARTYPE_FLOAT, VARTYPE_FLOAT, VARTYPE_FLOAT, VARTYPE_FLOAT, VARTYPE_FLOAT, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_FLOAT},
		//FLOAT LONG
		{VARTYPE_DOUBLE, VARTYPE_DOUBLE, VARTYPE_DOUBLE, VARTYPE_DOUBLE, VARTYPE_DOUBLE, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_FLOAT},
		//FLOAT FLOAT
		{VARTYPE_FLOAT, VARTYPE_FLOAT, VARTYPE_FLOAT, VARTYPE_FLOAT, VARTYPE_FLOAT, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_FLOAT},
		//FLOAT DOUBLE
		{VARTYPE_DOUBLE, VARTYPE_DOUBLE, VARTYPE_DOUBLE, VARTYPE_DOUBLE, VARTYPE_DOUBLE, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_FLOAT},
		//FLOAT STRING
		{VARTYPE_STRING, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID}
	},
	{
		//FLOAT BOOL
		{NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID},
		//FLOAT CHAR
		{VARTYPE_DOUBLE, VARTYPE_DOUBLE, VARTYPE_DOUBLE, VARTYPE_DOUBLE, VARTYPE_DOUBLE, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_DOUBLE},
		//FLOAT SHORT
		{VARTYPE_DOUBLE, VARTYPE_DOUBLE, VARTYPE_DOUBLE, VARTYPE_DOUBLE, VARTYPE_DOUBLE, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_DOUBLE},
		//FLOAT INT
		{VARTYPE_DOUBLE, VARTYPE_DOUBLE, VARTYPE_DOUBLE, VARTYPE_DOUBLE, VARTYPE_DOUBLE, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_DOUBLE},
		//FLOAT LONG
		{VARTYPE_DOUBLE, VARTYPE_DOUBLE, VARTYPE_DOUBLE, VARTYPE_DOUBLE, VARTYPE_DOUBLE, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_DOUBLE},
		//FLOAT FLOAT
		{VARTYPE_DOUBLE, VARTYPE_DOUBLE, VARTYPE_DOUBLE, VARTYPE_DOUBLE, VARTYPE_DOUBLE, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_DOUBLE},
		//FLOAT DOUBLE
		{VARTYPE_DOUBLE, VARTYPE_DOUBLE, VARTYPE_DOUBLE, VARTYPE_DOUBLE, VARTYPE_DOUBLE, NOT_VALID, NOT_VALID, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_BOOL, VARTYPE_DOUBLE},
		//FLOAT STRING
		{VARTYPE_STRING, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID}
	},
	{
		//STRING BOOL
		{VARTYPE_STRING, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID},
		//STRING CHAR
		{VARTYPE_STRING, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, VARTYPE_STRING},
		//STRING SHORT
		{VARTYPE_STRING, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID},
		//STRING INT
		{VARTYPE_STRING, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID},
		//STRING LONG
		{VARTYPE_STRING, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID},
		//STRING FLOAT
		{VARTYPE_STRING, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID},
		//STRING DOUBLE
		{VARTYPE_STRING, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID},
		//STRING STRING
		{VARTYPE_STRING, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, NOT_VALID, VARTYPE_STRING}
	}
};

class Aritmetic {
	public:
		Aritmetic();
		std::stack<char> operators;
		std::stack<Var*> operands;
		int isValid(char op, int leftype, int righttype);
};
