#include "main.h"
/**
 * *_strcpy - function that prints ...
 * @dest: buffer point
 * @src: copy form string ptr
 * Return: 0 (Always me)
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int x = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; x < a ; x++)
	{
		dest[x] = src[x];
	}
	dest[a] = '\0';

	return (dest);
}
