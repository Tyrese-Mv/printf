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
<<<<<<< HEAD
	unsigned int n = va_arg(list, unsigned int);
	int count = 0;
	int i, results;
=======
	unsigned int num = va_arg(list, unsigned int);
	int bits = 8 * sizeof(unsigned int);
	unsigned int *binary = malloc(bits * sizeof(unsigned int));
	unsigned int *toPrint = malloc(bits * sizeof(unsigned int));
	int i, k = 0, result;

	if (binary == NULL)
		return (-1);
>>>>>>> ee78917a99f6f5513485b000b5ff7239e8d256d1

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
<<<<<<< HEAD

=======
	result = (write(STDOUT_FILENO, toPrint, bits * sizeof(unsigned int)));
	free(binary);
	free(toPrint);
>>>>>>> ee78917a99f6f5513485b000b5ff7239e8d256d1
	return (result);

}
