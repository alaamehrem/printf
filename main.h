#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

#define NULL_STRING "(null)"


int _putchar(char c);

/* _printf.c module */
int _printf(const char *format, ...);

/* print_function.c module */

int formatPrint(const char *format, va_list input);
#endif
