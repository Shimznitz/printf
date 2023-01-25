#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _printf - prints anything
 * @format: the format string
 *
 * Return: number of bytes printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	va_start(ap, format);

	printf(format);
	va_end(ap);
	return (strlen(format));
}
