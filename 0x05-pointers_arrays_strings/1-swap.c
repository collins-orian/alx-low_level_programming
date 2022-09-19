#include "main.h"

/**
 * swap_int - function to swap integer values
 * @a: first value
 * @b: second value
 * Description - this function swaps the values for a and b
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
