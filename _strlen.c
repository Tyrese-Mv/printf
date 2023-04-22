#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - returns lenght of the string
 * @ch: string to be measured
 * Return: lenght
 */
int _strlen(const char *ch)
{
	unsigned int i;

	i = 0;
	while (ch[i])
	{
		i++;
	}
	return (i);
}
