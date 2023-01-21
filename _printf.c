#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _printf - produces output according to a format
 * @format: character string to print
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
va_list args;
int len = 0;
if (format == NULL)
	return (-1);
va_start(args, format);
len = _print_format(format, args);
va_end(args);
return (len);
}
