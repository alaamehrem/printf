#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

#define NULL_STRING "(null)"

/* _printf.c module */
int _printf(const char *format, ...);

/* print_function.c module */

/* _put.c module */
int put _puts (char *str);
int _putchar(int c);

int formatPrint(const char *format, va_list input);
#endif
