#include "main.h"

/**
 * swap_int -  swaps the values of two integers.
 * @a: First integer
 * @b: second integer
 *
 * Retrn: void
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
