#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - returns to newly allocated space in memory
 * which contains a copy of the string given as parameter.
 * @str: string
 *
 * Return: Always
 */
char *_strdup(char *str)
{
	int len = 0;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
		len++;

	dup = (char *)malloc((sizeof(char) * len) + 1);

	if (dup == NULL)
	{
		return (NULL);
	}
	memcpy(dup, str, len + 1);

	return (dup);
}
