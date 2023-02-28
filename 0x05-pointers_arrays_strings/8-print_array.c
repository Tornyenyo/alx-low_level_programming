#include "main.h"
/**
 * print_array - function to print n elements of an array of integers
 * followed by a new line
 * @a: number of elements of array
 * @n:  ptr
 */
void print_array(int *a, int *n)
{
	int b;

	for (b = 0; b < (n - 1); i++)
	{
		printf("%d, ", a[b]);
	}
	if (b == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
