#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - a function that produces output according to a format
 * @format: character string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list input;
	int i;
	int length = 0;
	int total_count = 0;

	va_start(input, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] != 'c' || format[i] != 's' || format[i] != '%' || format[i] != 'd' || format[i] != 'i')
				return (-1);
			else if (format[i] == 'c' || format[i] == 's' || format[i] == '%')
				length += formatPrint(&format[i], input);
			else if (format[i] == 'd' || format[i] == 'i')
				length += formatPrintDI(&format[i], input);
		}
		else
			_putchar(format[i]);
	}
	va_end(input);
	total_count = (i + length);
	return (total_count);
}
