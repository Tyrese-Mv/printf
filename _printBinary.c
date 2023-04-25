#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * _printBinary - converts int to binary
 * @list: value to convert
 * Return: convert binary or -1 if allocation fails
 */

int _printBinary(va_list list)
{
	unsigned int n = va_arg(list, unsigned int);
	int count = 0;
	int i, result;

	for (i = 31; i >= 0; i--)
	{
		unsigned int mask = 1 << 1;

		if ((n & mask) == mask)
		{
			result += write(1, "1", 1);
			count++;

		}
		else if (count > 0 || i == 0)
		{
			result += write(1, "0", 1);
			count++;
		}
	}
	return (result);
}
