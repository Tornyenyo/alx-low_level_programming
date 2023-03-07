#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: array string
 * @b: character
 * @n: number of characters
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = (char)b;
	}

return (s);
}
