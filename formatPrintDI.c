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
		int intInput = va_arg(input, int);

		if ((intInput > 999999) || (intInput < -999999))
			return (-1);
		else if (intInput < 0)
		{
			counter += NegativeNum(intInput);
		}
		else if (intInput > 0)
		{
			counter += PositiveNum(intInput);
		}
		else
		{
			_putchar('0');
			counter = 1;
		}
	}
	return (counter);
}
/**
 *NegativeNum - function that treat with negative number.
 *@negativeInput: list  variable.
 *Return: the number of characters printed
 */
int NegativeNum(int negativeInput)
{
	int counterN = 0;
	int divisionCounter = 100000;

	negativeInput = -negativeInput;
	_putchar('-');
	counterN++;
	while (divisionCounter > 0)
	{
		int oneDigit = negativeInput / divisionCounter;

		if (oneDigit > 0)
		{
			_putchar('0' + oneDigit);
			counterN++;
			negativeInput = negativeInput % divisionCounter;
		}
		if (oneDigit == 0 && counterN != 1)
		{
			_putchar('0');
			counterN++;
		}
		divisionCounter = divisionCounter / 10;
	}
	return (counterN);
}
/**
 *PositiveNum - function that treat with positive number.
 *@positiveInput: variable.
 *Return: int numeber
 */
int PositiveNum(int positiveInput)
{
	int divisionCounter = 100000;
	int counterP = 0;

	while (divisionCounter > 0)
	{
		int oneDigit = positiveInput / divisionCounter;

		if (oneDigit > 0)
		{
			_putchar('0' + oneDigit);
			counterP++;
			positiveInput = positiveInput % divisionCounter;
		}
		if (oneDigit == 0 && counterP != 0)
		{
			_putchar('0');
			counterP++;
		}
		divisionCounter = divisionCounter / 10;
	}
	return (counterP);
}
