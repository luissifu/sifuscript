#include "Command_Parser.h"

void Command_Parser::aritmetic_op(char op, data_type left, data_type right, data_type res) {
	switch(res.type)
	{
		case TYPE_CHAR:
			switch(op)
			{
				case '+':
					*res.data = *left.data + *right.data;
					break;

				case '-':
					*res.data = *left.data - *right.data;
					break;

				case '*':
					*res.data = *left.data * *right.data;
					break;

				case '/':
					*res.data = *left.data / *right.data;
					break;

				case '%':
					*res.data = *left.data % *right.data;
					break;
			}
			break;

		case TYPE_SHORT:
			switch(op)
			{
				case '+':
					*((short*)res.data) = *((short*)left.data) + *((short*)right.data);
					break;

				case '-':
					*((short*)res.data) = *((short*)left.data) - *((short*)right.data);
					break;

				case '*':
					*((short*)res.data) = *((short*)left.data) * *((short*)right.data);
					break;

				case '/':
					*((short*)res.data) = *((short*)left.data) / *((short*)right.data);
					break;

				case '%':
					*((short*)res.data) = *((short*)left.data) % *((short*)right.data);
					break;
			}
			break;

		case TYPE_INT:
			switch(op)
			{
				case '+':
					*((int*)res.data) = *((int*)left.data) + *((int*)right.data);
					break;

				case '-':
					*((int*)res.data) = *((int*)left.data) - *((int*)right.data);
					break;

				case '*':
					*((int*)res.data) = *((int*)left.data) * *((int*)right.data);
					break;

				case '/':
					*((int*)res.data) = *((int*)left.data) / *((int*)right.data);
					break;

				case '%':
					*((int*)res.data) = *((int*)left.data) % *((int*)right.data);
					break;
			}
			break;

		case TYPE_LONG:
			switch(op)
			{
				case '+':
					*((long*)res.data) = *((long*)left.data) + *((long*)right.data);
					break;

				case '-':
					*((long*)res.data) = *((long*)left.data) - *((long*)right.data);
					break;

				case '*':
					*((long*)res.data) = *((long*)left.data) * *((long*)right.data);
					break;

				case '/':
					*((long*)res.data) = *((long*)left.data) / *((long*)right.data);
					break;

				case '%':
					*((long*)res.data) = *((long*)left.data) % *((long*)right.data);
					break;
			}
			break;

		case TYPE_FLOAT:
			switch(op)
			{
				case '+':
					*((float*)res.data) = *((float*)left.data) + *((float*)right.data);
					break;

				case '-':
					*((float*)res.data) = *((float*)left.data) - *((float*)right.data);
					break;

				case '*':
					*((float*)res.data) = *((float*)left.data) * *((float*)right.data);
					break;

				case '/':
					*((float*)res.data) = *((float*)left.data) / *((float*)right.data);
					break;
			}
			break;

		case TYPE_DOUBLE:
			switch(op)
			{
				case '+':
					*((double*)res.data) = *((double*)left.data) + *((double*)right.data);
					break;

				case '-':
					*((double*)res.data) = *((double*)left.data) - *((double*)right.data);
					break;

				case '*':
					*((double*)res.data) = *((double*)left.data) * *((double*)right.data);
					break;

				case '/':
					*((double*)res.data) = *((double*)left.data) / *((double*)right.data);
					break;
			}
			break;

		case TYPE_STR:
			break;
	}
}
