#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of chars, that initializes with specific char
 * @size: kk
 * @c: ..
 * Return: Nothing
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = (char*)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
