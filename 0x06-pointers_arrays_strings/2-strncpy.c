#include "main.h"

/**
 * _strncat - concats 2 strings
 *
 * @src: source string
 * @dest: destination string
 * @n: length
 *
 * Return: ptr to string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
return (dest);
}
