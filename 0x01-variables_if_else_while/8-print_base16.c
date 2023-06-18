#include <stdio.h>
/**
 * main - entry point
 * Description: print numbers of base 16
 * Return: 0
 */

int main(void)
{
	char c;
	char i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
