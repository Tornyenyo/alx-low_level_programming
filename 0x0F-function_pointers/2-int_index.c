#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - a fxn that search for integer
 * @array: the arr
 * @size: ok
 * @cmp: oki
 *
 * Return: Always
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
