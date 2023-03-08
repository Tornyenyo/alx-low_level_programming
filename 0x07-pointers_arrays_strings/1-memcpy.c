#include "main.h"
/**
 * *_memcpy - copies memeory area
 * @dest: destination
 * @src: source
 * @n: lenght of source
 *
 * Return: Always
 */
char *_memcpy(char *dest, char *src, unisgned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
