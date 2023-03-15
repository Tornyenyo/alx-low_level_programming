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
	int len;
	char *dup;

	len = strlen(str);
	if (str == NULL)
	{
		return (NULL);
	}

	dup = (char *)malloc((sizeof(char) * len) + 1);

	if (dup == NULL)
	{
		return (NULL);
	}
	memcpy(dup, str, len + 1);
	dup[len] = '\0';

	return (dup);
}
