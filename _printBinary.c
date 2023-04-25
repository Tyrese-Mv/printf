#include "main.h"
#include <stdarg.h>
#include <unistd.h>

int_printBinary(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	int bits = 8 * sizeof(unsigned int);
	int binary[bits];
	int toPrint[bits];
	int i, k = 0;

	for (i = 0; i < bits; i++)
	{
		binary[i] = num & 1;
		num >>= 1;
	}

	for (i = bits - 1; i >= 0; i--)
	{
		toPrint[k] = binary[i];
		k++;
	}

	return (write(STDOUT_FILENO, toPrint, sizeof(toPrint)));

}
