#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * formatPrint - switches through format specifiers
 * @format: character string
 * Return: length of input
 */
int formatPrint(const char* format, va_list input)
{
	int counter = 0;

	if( *format == 'c')
	{
		char charInput = (char) va_arg(input, int);
		putchar(charInput);
		counter = 1;
	}
	else if (*format == 's')
	{
		char *strInput = va_arg(input, char*);
		int j = 0;
		while (strInput[j] != '\0')
		{
			putchar(strInput[j]);
			j++;
			counter++;
		}
	}
	else if (*format == '%')
	{
		putchar('%');
		counter = 1;
	}
	return(counter - 1);
}
