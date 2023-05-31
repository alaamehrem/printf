#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	static int x;
	static char buf[OUTPUT_BUF_SIZE];

	if (c == BUF_FLUSH || x >= OUTPUT_BUF_SIZE)
	{
		write(1, buf, x);
		x = 0;
	}
	if (c !=BUF_FLUSH)
		buf[x++] = c;
	return (1);
}

/**
 * _put - prints a string with  newline
 * @str: the string to print
 *
 * Return : void
 */
int _puts(char *str)
{
	char *p =str;

	while (*str)
		_putchar(*str++);
	return (str - p);
}
