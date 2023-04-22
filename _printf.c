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
	unsigned int k, i, count, len, j;
	char *ch, *str;

	count = 0;
	i = _strlen(format);
	ch = malloc(sizeof(char) * (i + 1));
	va_list list;

	va_start(list, format);
	for (k = 0; k < i; k++)
	{
		if (format[k] != '\0')
		{
			ch[count] = (char) va_arg(list, int);
			k++;
			count++;
		}
		else if (format[k] == '%' && format[k + 1] == 's')
		{
			str = va_arg(list, char *);
			len = _strlen(str);
			for (j = 0; j < len; j++)
			{
				ch[count] = str[j];
				count++;
			}
			k++;
			ch[count] = '\0';
		}
		else
		{
			ch[count] = format[k];
			count++;
		}
	}
	ch[count] = '\0';
	int result = write(STDOUT_FILENO, ch, count);

	va_end(list);
	free(ch);
	return (result);
}
