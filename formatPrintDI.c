#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * formatPrintDI - a function that produces output according to a format
 * @format: character string
 * @input : member list variable
 * Return: the number of characters printed
 */
int formatPrintDI(const char *format, va_list input)
{
	int counter = 0;

	if ((*format == 'd') || (*format == 'i'))
	{
		int intInput = va_arg(input, int*);

		if ((intInput > 999999) || (intInput < -999999))
			return (-1);
		else if (intInput < 0)
		{
			int c = NegativeNum(intInput);
		}
		else if (intInput > 0)
		{
			int c = NegativeNum(intInput);
		}
		else
			putchar('0');
	}
	return (counter - 1);
}

/*
 * NegativeNum : function that treat with negative number.
 *@input : list  variable.
 *Return : the number of characters printed
 */
int NegativeNum(va_list input)
{
	int counter = 0;
	int intInput = va_arg(input, int*);

	intInput = -intInput;
	putchar('-');
	counter++;

	int divisionCounter = 100000;

	while (divisionCounter > 0)
	{
		int oneDigit = intInput / divisionCounter;

		if (oneDigit > 0)
		{
			putchar('0' + oneDigit);
			counter++;
			intInput = intInput % divisionCounter;
		}
		if (oneDigit == 0 && counter != 1)
		{
			putchar('0');
			counter++;
		}
		divisionCounter = divisionCounter / 10;
	}
	return (divisionCounter);
}

/*
 * PositiveNum : function that treat with positive number.
 *@input : variable.
 *Return : int numeber
 */
int PositiveNum(va_list input)
{
	int divisionCounter = 100000;

	while (divisionCounter > 0)
	{
		int oneDigit = intInput / divisionCounter;

		if (oneDigit > 0)
		{
			putchar('0' + oneDigit);
			counter++;
			intInput = intInput % divisionCounter;
		}
		if (oneDigit == 0 && counter != 1)
		{
			putchar('0');
			counter++;
		}
		divisionCounter = divisionCounter / 10;
	}
	return (divisionCounter);
}
