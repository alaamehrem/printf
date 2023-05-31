#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

#define OUTPUT_BUF_SIZE 1024
#define BUF_FLUSH -1

#define NULL_STRING "(null)"

/* function prinf d,i format  */
int formatPrintDI(const char *format, va_list input);
int NegativeNum(int negativeInput);
int PositiveNum(int positiveInput);

/* _printf.c module */
int _printf(const char *format, ...);

/* print_function.c module */

/* _put.c module */
int _putchar(int c);

int formatPrint(const char *format, va_list input);
#endif
