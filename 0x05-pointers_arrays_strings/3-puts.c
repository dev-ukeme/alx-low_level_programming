#include "main.h"

/**
 * _puts - prints a string followed by a new line..
 *
 * @str: the string to print.
 *
 */

void _puts(char *str)
{
	int d = 0;

	while (str[d])
	{
		_putchar(str[d]);
		d++;
	}
	_putchar('\n');
}
