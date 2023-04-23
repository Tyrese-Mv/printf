#include <stdarg.h>
#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int _strlen(const char *ch);
int _printstring(va_list list);
int _printchar(va_list list);
int _printcheck(const char format, va_list list);

/**
 * struct FunctionStruct - checks if specifier matches with the call
 * @specifier: actiual character to check
 * @printFunctions: functions to call
 *
 * Description: longer description
 */
struct FunctionStruct
{
	char specifier;
	int (*printFunctions)(va_list);
};

#endif
