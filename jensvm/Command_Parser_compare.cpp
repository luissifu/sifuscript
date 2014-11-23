#include "Command_Parser.h"


void Command_Parser::compare_op(char op, data_type left, data_type right, data_type res) {
	switch(left.type)
	{
		case TYPE_CHAR:
			switch(right.type)
			{
				case TYPE_CHAR:
					switch(op)
					{
						case '>':
							*((bool*)res.data) = *left.data > *right.data;
							break;

						case '<':
							*((bool*)res.data) = *left.data < *right.data;
							break;

						case '=':
							*((bool*)res.data) = *left.data == *right.data;
							break;

						case '!':
							*((bool*)res.data) = *left.data != *right.data;
							break;

						case 'l':
							*((bool*)res.data) = *left.data <= *right.data;
							break;

						case 'm':
							*((bool*)res.data) = *left.data >= *right.data;
							break;
					}
					break;

				case TYPE_SHORT:
					switch(op)
					{
						case '>':
							*((bool*)res.data) = *left.data > *((short*)right.data);
							break;

						case '<':
							*((bool*)res.data) = *left.data < *((short*)right.data);
							break;

						case '=':
							*((bool*)res.data) = *left.data == *((short*)right.data);
							break;

						case '!':
							*((bool*)res.data) = *left.data != *((short*)right.data);
							break;

						case 'l':
							*((bool*)res.data) = *left.data <= *((short*)right.data);
							break;

						case 'm':
							*((bool*)res.data) = *left.data >= *((short*)right.data);
							break;
					}
					break;

				case TYPE_INT:
					switch(op)
					{
						case '>':
							*((bool*)res.data) = *left.data > *((int*)right.data);
							break;

						case '<':
							*((bool*)res.data) = *left.data < *((int*)right.data);
							break;

						case '=':
							*((bool*)res.data) = *left.data == *((int*)right.data);
							break;

						case '!':
							*((bool*)res.data) = *left.data != *((int*)right.data);
							break;

						case 'l':
							*((bool*)res.data) = *left.data <= *((int*)right.data);
							break;

						case 'm':
							*((bool*)res.data) = *left.data >= *((int*)right.data);
							break;
					}
					break;

				case TYPE_LONG:
					switch(op)
					{
						case '>':
							*((bool*)res.data) = *left.data > *((long*)right.data);
							break;

						case '<':
							*((bool*)res.data) = *left.data < *((long*)right.data);
							break;

						case '=':
							*((bool*)res.data) = *left.data == *((long*)right.data);
							break;

						case '!':
							*((bool*)res.data) = *left.data != *((long*)right.data);
							break;

						case 'l':
							*((bool*)res.data) = *left.data <= *((long*)right.data);
							break;

						case 'm':
							*((bool*)res.data) = *left.data >= *((long*)right.data);
							break;
					}
					break;

				case TYPE_FLOAT:
					switch(op)
					{
						case '>':
							*((bool*)res.data) = *left.data > *((float*)right.data);
							break;

						case '<':
							*((bool*)res.data) = *left.data < *((float*)right.data);
							break;

						case '=':
							*((bool*)res.data) = *left.data == *((float*)right.data);
							break;

						case '!':
							*((bool*)res.data) = *left.data != *((float*)right.data);
							break;

						case 'l':
							*((bool*)res.data) = *left.data <= *((float*)right.data);
							break;

						case 'm':
							*((bool*)res.data) = *left.data >= *((float*)right.data);
							break;
					}
					break;

				case TYPE_DOUBLE:
					switch(op)
					{
						case '>':
							*((bool*)res.data) = *left.data > *((double*)right.data);
							break;

						case '<':
							*((bool*)res.data) = *left.data < *((double*)right.data);
							break;

						case '=':
							*((bool*)res.data) = *left.data == *((double*)right.data);
							break;

						case '!':
							*((bool*)res.data) = *left.data != *((double*)right.data);
							break;

						case 'l':
							*((bool*)res.data) = *left.data <= *((double*)right.data);
							break;

						case 'm':
							*((bool*)res.data) = *left.data >= *((double*)right.data);
							break;
					}
					break;
			}
			break;

		case TYPE_SHORT:
			switch(right.type)
			{
				case TYPE_CHAR:
					switch(op)
					{
						case '>':
							*((bool*)res.data) = *((short*)left.data) > *right.data;
							break;

						case '<':
							*((bool*)res.data) = *((short*)left.data) < *right.data;
							break;

						case '=':
							*((bool*)res.data) = *((short*)left.data) == *right.data;
							break;

						case '!':
							*((bool*)res.data) = *((short*)left.data) != *right.data;
							break;

						case 'l':
							*((bool*)res.data) = *((short*)left.data) <= *right.data;
							break;

						case 'm':
							*((bool*)res.data) = *((short*)left.data) >= *right.data;
							break;
					}
					break;

				case TYPE_SHORT:
					switch(op)
					{
						case '>':
							*((bool*)res.data) = *((short*)left.data) > *((short*)right.data);
							break;

						case '<':
							*((bool*)res.data) = *((short*)left.data) < *((short*)right.data);
							break;

						case '=':
							*((bool*)res.data) = *((short*)left.data) == *((short*)right.data);
							break;

						case '!':
							*((bool*)res.data) = *((short*)left.data) != *((short*)right.data);
							break;

						case 'l':
							*((bool*)res.data) = *((short*)left.data) <= *((short*)right.data);
							break;

						case 'm':
							*((bool*)res.data) = *((short*)left.data) >= *((short*)right.data);
							break;
					}
					break;

				case TYPE_INT:
					switch(op)
					{
						case '>':
							*((bool*)res.data) = *((short*)left.data) > *((int*)right.data);
							break;

						case '<':
							*((bool*)res.data) = *((short*)left.data) < *((int*)right.data);
							break;

						case '=':
							*((bool*)res.data) = *((short*)left.data) == *((int*)right.data);
							break;

						case '!':
							*((bool*)res.data) = *((short*)left.data) != *((int*)right.data);
							break;

						case 'l':
							*((bool*)res.data) = *((short*)left.data) <= *((int*)right.data);
							break;

						case 'm':
							*((bool*)res.data) = *((short*)left.data) >= *((int*)right.data);
							break;
					}
					break;

				case TYPE_LONG:
					switch(op)
					{
						case '>':
							*((bool*)res.data) = *((short*)left.data) > *((long*)right.data);
							break;

						case '<':
							*((bool*)res.data) = *((short*)left.data) < *((long*)right.data);
							break;

						case '=':
							*((bool*)res.data) = *((short*)left.data) == *((long*)right.data);
							break;

						case '!':
							*((bool*)res.data) = *((short*)left.data) != *((long*)right.data);
							break;

						case 'l':
							*((bool*)res.data) = *((short*)left.data) <= *((long*)right.data);
							break;

						case 'm':
							*((bool*)res.data) = *((short*)left.data) >= *((long*)right.data);
							break;
					}
					break;

				case TYPE_FLOAT:
					switch(op)
					{
						case '>':
							*((bool*)res.data) = *((short*)left.data) > *((float*)right.data);
							break;

						case '<':
							*((bool*)res.data) = *((short*)left.data) < *((float*)right.data);
							break;

						case '=':
							*((bool*)res.data) = *((short*)left.data) == *((float*)right.data);
							break;

						case '!':
							*((bool*)res.data) = *((short*)left.data) != *((float*)right.data);
							break;

						case 'l':
							*((bool*)res.data) = *((short*)left.data) <= *((float*)right.data);
							break;

						case 'm':
							*((bool*)res.data) = *((short*)left.data) >= *((float*)right.data);
							break;
					}
					break;

				case TYPE_DOUBLE:
					switch(op)
					{
						case '>':
							*((bool*)res.data) = *((short*)left.data) > *((double*)right.data);
							break;

						case '<':
							*((bool*)res.data) = *((short*)left.data) < *((double*)right.data);
							break;

						case '=':
							*((bool*)res.data) = *((short*)left.data) == *((double*)right.data);
							break;

						case '!':
							*((bool*)res.data) = *((short*)left.data) != *((double*)right.data);
							break;

						case 'l':
							*((bool*)res.data) = *((short*)left.data) <= *((double*)right.data);
							break;

						case 'm':
							*((bool*)res.data) = *((short*)left.data) >= *((double*)right.data);
							break;
					}
					break;
			}
			break;

		case TYPE_INT:
			switch(right.type)
			{
				case TYPE_CHAR:
					switch(op)
					{
						case '>':
							*((bool*)res.data) = *((int*)left.data) > *right.data;
							break;

						case '<':
							*((bool*)res.data) = *((int*)left.data) < *right.data;
							break;

						case '=':
							*((bool*)res.data) = *((int*)left.data) == *right.data;
							break;

						case '!':
							*((bool*)res.data) = *((int*)left.data) != *right.data;
							break;

						case 'l':
							*((bool*)res.data) = *((int*)left.data) <= *right.data;
							break;

						case 'm':
							*((bool*)res.data) = *((int*)left.data) >= *right.data;
							break;
					}
					break;

				case TYPE_SHORT:
					switch(op)
					{
						case '>':
							*((bool*)res.data) = *((int*)left.data) > *((short*)right.data);
							break;

						case '<':
							*((bool*)res.data) = *((int*)left.data) < *((short*)right.data);
							break;

						case '=':
							*((bool*)res.data) = *((int*)left.data) == *((short*)right.data);
							break;

						case '!':
							*((bool*)res.data) = *((int*)left.data) != *((short*)right.data);
							break;

						case 'l':
							*((bool*)res.data) = *((int*)left.data) <= *((short*)right.data);
							break;

						case 'm':
							*((bool*)res.data) = *((int*)left.data) >= *((short*)right.data);
							break;
					}
					break;

				case TYPE_INT:
					switch(op)
					{
						case '>':
							*((bool*)res.data) = *((int*)left.data) > *((int*)right.data);
							break;

						case '<':
							*((bool*)res.data) = *((int*)left.data) < *((int*)right.data);
							break;

						case '=':
							*((bool*)res.data) = *((int*)left.data) == *((int*)right.data);
							break;

						case '!':
							*((bool*)res.data) = *((int*)left.data) != *((int*)right.data);
							break;

						case 'l':
							*((bool*)res.data) = *((int*)left.data) <= *((int*)right.data);
							break;

						case 'm':
							*((bool*)res.data) = *((int*)left.data) >= *((int*)right.data);
							break;
					}
					break;

				case TYPE_LONG:
					switch(op)
					{
						case '>':
							*((bool*)res.data) = *((int*)left.data) > *((long*)right.data);
							break;

						case '<':
							*((bool*)res.data) = *((int*)left.data) < *((long*)right.data);
							break;

						case '=':
							*((bool*)res.data) = *((int*)left.data) == *((long*)right.data);
							break;

						case '!':
							*((bool*)res.data) = *((int*)left.data) != *((long*)right.data);
							break;

						case 'l':
							*((bool*)res.data) = *((int*)left.data) <= *((long*)right.data);
							break;

						case 'm':
							*((bool*)res.data) = *((int*)left.data) >= *((long*)right.data);
							break;
					}
					break;

				case TYPE_FLOAT:
					switch(op)
					{
						case '>':
							*((bool*)res.data) = *((int*)left.data) > *((float*)right.data);
							break;

						case '<':
							*((bool*)res.data) = *((int*)left.data) < *((float*)right.data);
							break;

						case '=':
							*((bool*)res.data) = *((int*)left.data) == *((float*)right.data);
							break;

						case '!':
							*((bool*)res.data) = *((int*)left.data) != *((float*)right.data);
							break;

						case 'l':
							*((bool*)res.data) = *((int*)left.data) <= *((float*)right.data);
							break;

						case 'm':
							*((bool*)res.data) = *((int*)left.data) >= *((float*)right.data);
							break;
					}
					break;

				case TYPE_DOUBLE:
					switch(op)
					{
						case '>':
							*((bool*)res.data) = *((int*)left.data) > *((double*)right.data);
							break;

						case '<':
							*((bool*)res.data) = *((int*)left.data) < *((double*)right.data);
							break;

						case '=':
							*((bool*)res.data) = *((int*)left.data) == *((double*)right.data);
							break;

						case '!':
							*((bool*)res.data) = *((int*)left.data) != *((double*)right.data);
							break;

						case 'l':
							*((bool*)res.data) = *((int*)left.data) <= *((double*)right.data);
							break;

						case 'm':
							*((bool*)res.data) = *((int*)left.data) >= *((double*)right.data);
							break;
					}
					break;
			}
			break;

		case TYPE_LONG:
			switch(right.type)
			{
				case TYPE_CHAR:
					switch(op)
					{
						case '>':
							*((bool*)res.data) = *((long*)left.data) > *right.data;
							break;

						case '<':
							*((bool*)res.data) = *((long*)left.data) < *right.data;
							break;

						case '=':
							*((bool*)res.data) = *((long*)left.data) == *right.data;
							break;

						case '!':
							*((bool*)res.data) = *((long*)left.data) != *right.data;
							break;

						case 'l':
							*((bool*)res.data) = *((long*)left.data) <= *right.data;
							break;

						case 'm':
							*((bool*)res.data) = *((long*)left.data) >= *right.data;
							break;
					}
					break;

				case TYPE_SHORT:
					switch(op)
					{
						case '>':
							*((bool*)res.data) = *((long*)left.data) > *((short*)right.data);
							break;

						case '<':
							*((bool*)res.data) = *((long*)left.data) < *((short*)right.data);
							break;

						case '=':
							*((bool*)res.data) = *((long*)left.data) == *((short*)right.data);
							break;

						case '!':
							*((bool*)res.data) = *((long*)left.data) != *((short*)right.data);
							break;

						case 'l':
							*((bool*)res.data) = *((long*)left.data) <= *((short*)right.data);
							break;

						case 'm':
							*((bool*)res.data) = *((long*)left.data) >= *((short*)right.data);
							break;
					}
					break;

				case TYPE_INT:
					switch(op)
					{
						case '>':
							*((bool*)res.data) = *((long*)left.data) > *((int*)right.data);
							break;

						case '<':
							*((bool*)res.data) = *((long*)left.data) < *((int*)right.data);
							break;

						case '=':
							*((bool*)res.data) = *((long*)left.data) == *((int*)right.data);
							break;

						case '!':
							*((bool*)res.data) = *((long*)left.data) != *((int*)right.data);
							break;

						case 'l':
							*((bool*)res.data) = *((long*)left.data) <= *((int*)right.data);
							break;

						case 'm':
							*((bool*)res.data) = *((long*)left.data) >= *((int*)right.data);
							break;
					}
					break;

				case TYPE_LONG:
					switch(op)
					{
						case '>':
							*((bool*)res.data) = *((long*)left.data) > *((long*)right.data);
							break;

						case '<':
							*((bool*)res.data) = *((long*)left.data) < *((long*)right.data);
							break;

						case '=':
							*((bool*)res.data) = *((long*)left.data) == *((long*)right.data);
							break;

						case '!':
							*((bool*)res.data) = *((long*)left.data) != *((long*)right.data);
							break;

						case 'l':
							*((bool*)res.data) = *((long*)left.data) <= *((long*)right.data);
							break;

						case 'm':
							*((bool*)res.data) = *((long*)left.data) >= *((long*)right.data);
							break;
					}
					break;

				case TYPE_FLOAT:
					switch(op)
					{
						case '>':
							*((bool*)res.data) = *((long*)left.data) > *((float*)right.data);
							break;

						case '<':
							*((bool*)res.data) = *((long*)left.data) < *((float*)right.data);
							break;

						case '=':
							*((bool*)res.data) = *((long*)left.data) == *((float*)right.data);
							break;

						case '!':
							*((bool*)res.data) = *((long*)left.data) != *((float*)right.data);
							break;

						case 'l':
							*((bool*)res.data) = *((long*)left.data) <= *((float*)right.data);
							break;

						case 'm':
							*((bool*)res.data) = *((long*)left.data) >= *((float*)right.data);
							break;
					}
					break;

				case TYPE_DOUBLE:
					switch(op)
					{
						case '>':
							*((bool*)res.data) = *((long*)left.data) > *((double*)right.data);
							break;

						case '<':
							*((bool*)res.data) = *((long*)left.data) < *((double*)right.data);
							break;

						case '=':
							*((bool*)res.data) = *((long*)left.data) == *((double*)right.data);
							break;

						case '!':
							*((bool*)res.data) = *((long*)left.data) != *((double*)right.data);
							break;

						case 'l':
							*((bool*)res.data) = *((long*)left.data) <= *((double*)right.data);
							break;

						case 'm':
							*((bool*)res.data) = *((long*)left.data) >= *((double*)right.data);
							break;
					}
					break;
			}
			break;

		case TYPE_FLOAT:
			switch(right.type)
			{
				case TYPE_CHAR:
					switch(op)
					{
						case '>':
							*((bool*)res.data) = *((float*)left.data) > *right.data;
							break;

						case '<':
							*((bool*)res.data) = *((float*)left.data) < *right.data;
							break;

						case '=':
							*((bool*)res.data) = *((float*)left.data) == *right.data;
							break;

						case '!':
							*((bool*)res.data) = *((float*)left.data) != *right.data;
							break;

						case 'l':
							*((bool*)res.data) = *((float*)left.data) <= *right.data;
							break;

						case 'm':
							*((bool*)res.data) = *((float*)left.data) >= *right.data;
							break;
					}
					break;

				case TYPE_SHORT:
					switch(op)
					{
						case '>':
							*((bool*)res.data) = *((float*)left.data) > *((short*)right.data);
							break;

						case '<':
							*((bool*)res.data) = *((float*)left.data) < *((short*)right.data);
							break;

						case '=':
							*((bool*)res.data) = *((float*)left.data) == *((short*)right.data);
							break;

						case '!':
							*((bool*)res.data) = *((float*)left.data) != *((short*)right.data);
							break;

						case 'l':
							*((bool*)res.data) = *((float*)left.data) <= *((short*)right.data);
							break;

						case 'm':
							*((bool*)res.data) = *((float*)left.data) >= *((short*)right.data);
							break;
					}
					break;

				case TYPE_INT:
					switch(op)
					{
						case '>':
							*((bool*)res.data) = *((float*)left.data) > *((int*)right.data);
							break;

						case '<':
							*((bool*)res.data) = *((float*)left.data) < *((int*)right.data);
							break;

						case '=':
							*((bool*)res.data) = *((float*)left.data) == *((int*)right.data);
							break;

						case '!':
							*((bool*)res.data) = *((float*)left.data) != *((int*)right.data);
							break;

						case 'l':
							*((bool*)res.data) = *((float*)left.data) <= *((int*)right.data);
							break;

						case 'm':
							*((bool*)res.data) = *((float*)left.data) >= *((int*)right.data);
							break;
					}
					break;

				case TYPE_LONG:
					switch(op)
					{
						case '>':
							*((bool*)res.data) = *((float*)left.data) > *((long*)right.data);
							break;

						case '<':
							*((bool*)res.data) = *((float*)left.data) < *((long*)right.data);
							break;

						case '=':
							*((bool*)res.data) = *((float*)left.data) == *((long*)right.data);
							break;

						case '!':
							*((bool*)res.data) = *((float*)left.data) != *((long*)right.data);
							break;

						case 'l':
							*((bool*)res.data) = *((float*)left.data) <= *((long*)right.data);
							break;

						case 'm':
							*((bool*)res.data) = *((float*)left.data) >= *((long*)right.data);
							break;
					}
					break;

				case TYPE_FLOAT:
					switch(op)
					{
						case '>':
							*((bool*)res.data) = *((float*)left.data) > *((float*)right.data);
							break;

						case '<':
							*((bool*)res.data) = *((float*)left.data) < *((float*)right.data);
							break;

						case '=':
							*((bool*)res.data) = *((float*)left.data) == *((float*)right.data);
							break;

						case '!':
							*((bool*)res.data) = *((float*)left.data) != *((float*)right.data);
							break;

						case 'l':
							*((bool*)res.data) = *((float*)left.data) <= *((float*)right.data);
							break;

						case 'm':
							*((bool*)res.data) = *((float*)left.data) >= *((float*)right.data);
							break;
					}
					break;

				case TYPE_DOUBLE:
					switch(op)
					{
						case '>':
							*((bool*)res.data) = *((float*)left.data) > *((double*)right.data);
							break;

						case '<':
							*((bool*)res.data) = *((float*)left.data) < *((double*)right.data);
							break;

						case '=':
							*((bool*)res.data) = *((float*)left.data) == *((double*)right.data);
							break;

						case '!':
							*((bool*)res.data) = *((float*)left.data) != *((double*)right.data);
							break;

						case 'l':
							*((bool*)res.data) = *((float*)left.data) <= *((double*)right.data);
							break;

						case 'm':
							*((bool*)res.data) = *((float*)left.data) >= *((double*)right.data);
							break;
					}
					break;
			}
			break;

		case TYPE_DOUBLE:
			switch(right.type)
			{
				case TYPE_CHAR:
					switch(op)
					{
						case '>':
							*((bool*)res.data) = *((double*)left.data) > *right.data;
							break;

						case '<':
							*((bool*)res.data) = *((double*)left.data) < *right.data;
							break;

						case '=':
							*((bool*)res.data) = *((double*)left.data) == *right.data;
							break;

						case '!':
							*((bool*)res.data) = *((double*)left.data) != *right.data;
							break;

						case 'l':
							*((bool*)res.data) = *((double*)left.data) <= *right.data;
							break;

						case 'm':
							*((bool*)res.data) = *((double*)left.data) >= *right.data;
							break;
					}
					break;

				case TYPE_SHORT:
					switch(op)
					{
						case '>':
							*((bool*)res.data) = *((double*)left.data) > *((short*)right.data);
							break;

						case '<':
							*((bool*)res.data) = *((double*)left.data) < *((short*)right.data);
							break;

						case '=':
							*((bool*)res.data) = *((double*)left.data) == *((short*)right.data);
							break;

						case '!':
							*((bool*)res.data) = *((double*)left.data) != *((short*)right.data);
							break;

						case 'l':
							*((bool*)res.data) = *((double*)left.data) <= *((short*)right.data);
							break;

						case 'm':
							*((bool*)res.data) = *((double*)left.data) >= *((short*)right.data);
							break;
					}
					break;

				case TYPE_INT:
					switch(op)
					{
						case '>':
							*((bool*)res.data) = *((double*)left.data) > *((int*)right.data);
							break;

						case '<':
							*((bool*)res.data) = *((double*)left.data) < *((int*)right.data);
							break;

						case '=':
							*((bool*)res.data) = *((double*)left.data) == *((int*)right.data);
							break;

						case '!':
							*((bool*)res.data) = *((double*)left.data) != *((int*)right.data);
							break;

						case 'l':
							*((bool*)res.data) = *((double*)left.data) <= *((int*)right.data);
							break;

						case 'm':
							*((bool*)res.data) = *((double*)left.data) >= *((int*)right.data);
							break;
					}
					break;

				case TYPE_LONG:
					switch(op)
					{
						case '>':
							*((bool*)res.data) = *((double*)left.data) > *((long*)right.data);
							break;

						case '<':
							*((bool*)res.data) = *((double*)left.data) < *((long*)right.data);
							break;

						case '=':
							*((bool*)res.data) = *((double*)left.data) == *((long*)right.data);
							break;

						case '!':
							*((bool*)res.data) = *((double*)left.data) != *((long*)right.data);
							break;

						case 'l':
							*((bool*)res.data) = *((double*)left.data) <= *((long*)right.data);
							break;

						case 'm':
							*((bool*)res.data) = *((double*)left.data) >= *((long*)right.data);
							break;
					}
					break;

				case TYPE_FLOAT:
					switch(op)
					{
						case '>':
							*((bool*)res.data) = *((double*)left.data) > *((float*)right.data);
							break;

						case '<':
							*((bool*)res.data) = *((double*)left.data) < *((float*)right.data);
							break;

						case '=':
							*((bool*)res.data) = *((double*)left.data) == *((float*)right.data);
							break;

						case '!':
							*((bool*)res.data) = *((double*)left.data) != *((float*)right.data);
							break;

						case 'l':
							*((bool*)res.data) = *((double*)left.data) <= *((float*)right.data);
							break;

						case 'm':
							*((bool*)res.data) = *((double*)left.data) >= *((float*)right.data);
							break;
					}
					break;

				case TYPE_DOUBLE:
					switch(op)
					{
						case '>':
							*((bool*)res.data) = *((double*)left.data) > *((double*)right.data);
							break;

						case '<':
							*((bool*)res.data) = *((double*)left.data) < *((double*)right.data);
							break;

						case '=':
							*((bool*)res.data) = *((double*)left.data) == *((double*)right.data);
							break;

						case '!':
							*((bool*)res.data) = *((double*)left.data) != *((double*)right.data);
							break;

						case 'l':
							*((bool*)res.data) = *((double*)left.data) <= *((double*)right.data);
							break;

						case 'm':
							*((bool*)res.data) = *((double*)left.data) >= *((double*)right.data);
							break;
					}
					break;
			}
			break;
	}
}
