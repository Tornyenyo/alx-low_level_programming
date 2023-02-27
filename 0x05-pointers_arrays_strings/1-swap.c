#include "main.h"
/**
 *swap_int - fxn that swaps the value of 2 integers
 * @a: the integer
 * @b: the 2nd integer
 *
 */
void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
