#include "Command_Parser.h"

void Command_Parser::aritmetic_op(char op, data_type left, data_type right, data_type res) {
	if (left.type == TYPE_ADDRESS)
	{
		int* address = (int*)left.data;
		int* add = (int*)res.data;
		aritmetic_op(op,mem->read(*address),right,res);
		return;
	}
	if (right.type == TYPE_ADDRESS)
	{
		int* address = (int*)right.data;
		int* add = (int*)res.data;
		aritmetic_op(op,left,mem->read(*address),res);
		return;
	}

	switch(res.type)
	{
		case TYPE_CHAR:
			switch(op)
			{
				case '+':
					*((char*)res.data) = *((char*)left.data) + *((char*)right.data);
					break;

				case '-':
					*((char*)res.data) = *((char*)left.data) - *((char*)right.data);
					break;

				case '*':
					*((char*)res.data) = *((char*)left.data) * *((char*)right.data);
					break;

				case '/':
					*((char*)res.data) = *((char*)left.data) / *((char*)right.data);
					break;

				case '%':
					*((char*)res.data) = *((char*)left.data) % *((char*)right.data);
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
			if (left.type == TYPE_STR)
			{
				switch(right.type)
				{
					case TYPE_BOOL:
						{
							std::string val = (*((bool*)right.data))?"true":"false";
							*((std::string*)res.data) = *((std::string*)left.data) + val;
						}
						break;

					case TYPE_CHAR:
						*((std::string*)res.data) = *((std::string*)left.data) + *((char*)right.data);
						break;

					case TYPE_SHORT:
						{
							std::string val = std::to_string(*((short*)right.data));
							*((std::string*)res.data) = *((std::string*)left.data) + val;
						}
						break;

					case TYPE_INT:
						{
							std::string val = std::to_string(*((int*)right.data));
							*((std::string*)res.data) = *((std::string*)left.data) + val;
						}
						break;

					case TYPE_LONG:
						{
							std::string val = std::to_string(*((long*)right.data));
							*((std::string*)res.data) = *((std::string*)left.data) + val;
						}
						break;

					case TYPE_FLOAT:
						{
							std::string val = std::to_string(*((float*)right.data));
							*((std::string*)res.data) = *((std::string*)left.data) + val;
						}
						break;

					case TYPE_DOUBLE:
						{
							std::string val = std::to_string(*((double*)right.data));
							*((std::string*)res.data) = *((std::string*)left.data) + val;
						}
						break;

					case TYPE_STR:
						{
							std::string val = *((std::string*)right.data);
							*((std::string*)res.data) = *((std::string*)left.data) + val;
						}
						break;
				}
			}
			else
			{
				switch(left.type)
				{
					case TYPE_BOOL:
						{
							std::string val = (*((bool*)left.data))?"true":"false";
							*((std::string*)res.data) = val + *((std::string*)right.data);
						}
						break;

					case TYPE_CHAR:
						*((std::string*)res.data) = *((char*)left.data) + *((std::string*)right.data);
						break;

					case TYPE_SHORT:
						{
							std::string val = std::to_string(*((short*)left.data));
							*((std::string*)res.data) = val + *((std::string*)right.data);
						}
						break;

					case TYPE_INT:
						{
							std::string val = std::to_string(*((int*)left.data));
							*((std::string*)res.data) = val + *((std::string*)right.data);
						}
						break;

					case TYPE_LONG:
						{
							std::string val = std::to_string(*((long*)left.data));
							*((std::string*)res.data) = val + *((std::string*)right.data);
						}
						break;

					case TYPE_FLOAT:
						{
							std::string val = std::to_string(*((float*)left.data));
							*((std::string*)res.data) = val + *((std::string*)right.data);
						}
						break;

					case TYPE_DOUBLE:
						{
							std::string val = std::to_string(*((double*)left.data));
							*((std::string*)res.data) = val + *((std::string*)right.data);
						}
						break;

					case TYPE_STR:
						{
							std::string val = *((std::string*)left.data);
							*((std::string*)res.data) = val + *((std::string*)right.data);
						}
						break;
				}
			}
			break;
	}
}
