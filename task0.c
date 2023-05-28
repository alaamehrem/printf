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

	va_start(input, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				char charInput = (char) va_arg(input, int);

				_putchar(charInput);
			}
			else if (format[i] == 's')
			{
				char *strInput = va_arg(input, char*);
				int j = 0;

				while (strInput[j] != '\0')
				{
					_putchar(strInput[j]);
					j++;
				}
			}
			else if (format[i] == '%')
				_putchar('%');
		}
		else
		{
			_putchar(format[i]);
		}
		va_end(input);
	}
	_putchar('\n');
	return (i);
}
