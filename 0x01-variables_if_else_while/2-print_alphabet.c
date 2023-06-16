#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * Description: use putcahr to print alphabets
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
