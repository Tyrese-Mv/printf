#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * _printReverse - prints a reversed string
 * @list: va_list containing the string to be printed
 *
 * Return: number of characters printed
 */
int _printReverse(va_list list)
{
	char *str = va_arg(list, char *);
	int len = 0, i;

	len = _strlen(str);
	for (i = len - 1; i >= 0; i--)
		write(STDOUT_FILENO, &str[i], 1);
	return (len);
}
