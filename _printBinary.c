#include "main.h"
#include <stdarg.h>
#include <unistd.h>

int_printBinary(va_list list)
{
	unsigned int n = va_arg(list, unsigned int);
	int count = 0;
	int i, results;

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
