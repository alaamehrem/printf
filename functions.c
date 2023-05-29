#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * formatPrint - switches through format specifiers
 * @format: character string
 * @input: arrays of inputed string
 * Return: length of input
 */
int formatPrint(const char *format, va_list input)
{
	int counter = 0;

	if (*format == 'c')
	{
		char charInput = (char) va_arg(input, int);

		_putchar(charInput);
		counter = 1;
	}
	else if (*format == 's')
	{
		char *strInput = va_arg(input, char*);
		int j = 0;

		while (strInput[j] != '\0')
		{
			_putchar(strInput[j]);
			j++;
			counter++;
		}
	}
	else if (*format == '%')
	{
		_putchar('%');
		counter = -1;
	}
	return (counter);
}
