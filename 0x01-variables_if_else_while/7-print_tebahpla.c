#include <stdio.h>
/**
 * main -  entry point
 * Description: print lowercase in reverse
 * Return: 0
 */

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}

	putchar('\n');

	return (0);
}
