#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: param first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int i;

	i = 0;
	i = *a;
	*a = *b;
	*b = i;
}
