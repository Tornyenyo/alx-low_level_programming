#include "main.h"
/**
 * *_strcat - function to concatenate 2 strings
 * @dest: 1st string
 * @src: 2nd string
 *
 * Return: Ptr to dest
 */
char *_strcat(char *dest, char *src)
{
	char *a = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';

	return (a);
}
