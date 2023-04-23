#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * _strlen - check the length of the string
 * @ch: string to mearsure
 * Return: int
 */
int _strlen(const char *ch)
{
	unsigned int i = 0;

	while (ch[i])
	{
		i++;
	}
	return (i);
}
/**
 * _printchar - prints char
 * @list: argument to print
 * Return: int
 */
int _printchar(va_list list)
{
	char c = va_arg(list, int);

	return (write(STDOUT_FILENO, &c, 1));
}
/**
 * _printstring - prints a string
 * @list: string to print
 * Return: int
 */
int _printstring(va_list list)
{
	char *str = va_arg(list, char *);

	return (write(STDOUT_FILENO, str, _strlen(str)));
}
