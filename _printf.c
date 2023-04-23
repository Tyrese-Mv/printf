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
	unsigned int count = 0;
	char c, *str;
	va_list list;

	while (*format != '\0')
	{
		if (format == '%')
		{
			format++;
			switch (*format) :
				case 'c':
				{
					c = (char)va_arg(args, int);
					_putchar(c);
					count++;
					break;
				}
				case 's':
				{
					str = va_arg(args, char *);
					_puts(str);
					count += _strlen(str);
					break;
				}
				case '%':
				{
					_putchar('%');
					count++;
					break;
				}
				default:
				{
					_putchar('%');
					_putchar(*format);
					count += 2;
					break;
				}
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
	}
	va_end(list);
	return (count);
}
