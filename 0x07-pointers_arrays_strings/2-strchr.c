#include "main.h"
/**
 * _strchr - locate character
 * @s: string to search
 * @c: Character to locate
 *
 * Return: always
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
