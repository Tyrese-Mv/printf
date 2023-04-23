#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * _printcheck - checks and matchs format with function
 * @format: format from argument to check
 * @list: the list agrument to print
 * Return: funtion type to be passed on to the print string function
 */
int _printcheck(const char format, va_list list)
{
	unsigned int i;
	int naught = -1;
	char c1;

	/**
	 * struct FunctionStruct functions - collection of func and specifiers
	 * @functions: collection of functions
	 */
	struct FunctionStruct functions[] = {
	       {'c', _printchar}, {'s', _printstring}, {'\0', NULL}
	};

	for (i = 0; functions[i].specifier != '\0'; i++)
	{
		if (format == functions[i].specifier)
		{
			return (functions[i].printFunctions(list));
		}
		else
		{
			c1 = '%';
			return (write(STDOUT_FILENO, &c1, sizeof(c1)));
		}
	}
	return (naught);
}
