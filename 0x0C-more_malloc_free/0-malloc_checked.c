#include "main.h"
/**
 * malloc_checked - ok
 * @b: allocated mem
 *
 * Return: Always
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
