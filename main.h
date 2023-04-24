#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _printf(const char *format, ...);
int _strlen(const char *ch);
int _printstring(va_list list);
int _printchar(va_list list);
int _printcheck(const char format, va_list list);
int _printint(va_list list);

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
/**
 * typedef struct FunctionStruct functionStruct - Renamed the struct coz betty
 *
 * @FunctionStruct: name of struct
 * @functionStruct: new name
 */
typedef struct FunctionStruct functionStruct;

#endif
