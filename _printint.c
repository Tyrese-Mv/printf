#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 *_printint - prints an integer
 *@list: argument to print
 *Return: number of digits
 */
int _printint(va_list list)
{
	int num = va_arg(list, int), minus = 0, temp, i;
	int digit_count = 0;
	int is_negative = 0;
	char *num_str;

	if (num < 0)
	{
		is_negative = 1;
		num *= -1;
		digit_count++;
	}
	temp = num;
	while (temp > 0)
	{
		temp /= 10;
		digit_count++;
	}
	num_str = (char *) malloc((digit_count + 1) * sizeof(char));
	num_str[digit_count] = '\0';
	for (i = digit_count - 1; i >= 0; i--)
	{
		num_str[i] = (num % 10) + '0';
		num /= 10;
	}
	if (is_negative)
	{
		minus = write(STDOUT_FILENO, "-", 1);
		return (minus + write(STDOUT_FILENO, num_str, digit_count));
	}
	else
	{
		return (write(STDOUT_FILENO, num_str, digit_count));
	}
}
