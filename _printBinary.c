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
	unsigned int num = va_arg(list, unsigned int);
	int bits = 8 * sizeof(unsigned int);
	int *binary = malloc(bits * sizeof(unsigned int));
	int *toPrint = malloc(bits * sizeof(unsigned int));
	int i, k = 0, result;

	if (binary == NULL)
		return (-1);

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
	result = (write(STDOUT_FILENO, toPrint, bits * sizeof(int)));
	free(binary);
	free(toPrint);
	return (result);

}
