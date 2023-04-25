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
	unsigned int mask = 1u << 31;
	int count = 0;

	while (mask != 0)
	{
		if (n & mask)
	{
		write(1, "1", 1);
		count++;
	}
		else if (count != 0)
	{
		mask >>= 1;
	}
		if (count == 0)
	{
		write(1, "0", 1);
		count++;
	}
		return (count);
}
