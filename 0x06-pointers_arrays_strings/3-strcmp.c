#include "main.h"
/**
 * _strcmp - Compare 2 strings
 * @s1: sting 1
 * @s2: string 2
 * Return: Always
 */
int _strcmp(char *s1, char *s2);
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
