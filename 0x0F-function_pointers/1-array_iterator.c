#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - iterate a fxn in array
 *
 * @array: ok
 * @size: size of array
 * @action: fuction to be iterated
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)

		for (i = 0; i < size; i++)
		{
			action = (array[i]);
		}
}
