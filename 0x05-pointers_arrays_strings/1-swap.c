#include "main.h"

/**
 * swap_int - These program swap the value of two integer.
 * @a: the first input
 * @b: the second input
*/

void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
