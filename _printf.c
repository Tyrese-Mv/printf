#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * _printf - prints to the standard output
 * @format: specifiers to check
 * Return: count
 */
int _printf(const char *format, ...)
{
	unsigned int count = 0, increment;
	va_list list;

	va_start(list, format);
	while(format[count] != '\0')
	{
		if (format[count] == '%')
		{
			increment += _printcheck(format[count + 1], list);
			count++;
		}
		else
		{
			increment += write(STDOUT_FILENO, &format[count], 1);
			count++;
		}
	}
	va_end(list);
	return (increment);
}
