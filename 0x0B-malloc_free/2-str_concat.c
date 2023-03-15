#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - returns to newly allocated space in memory
 * which contains a copy of the string given as parameter.
 * @s1: string one
 * @s2: string two
 *
 * Return: Always
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int s1_len, s2_len, len;

	s1_len = s2_len = 0;
	len = s1_len + s2_len;
	if (s1 == NULL)
		s1 = "";
	s1_len = strlen(s1);
	while (s1[s1_len] != '\0')
		s1_len++;

	if (s2 == NULL)
		s2 = "";
	s2_len = strlen(s2);
	while (s2[s2_len] != '\0')
		s2_len++;

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	result = (char *)malloc(sizeof(char) * (len + 1));

	if (result == NULL)
		return (NULL);

	memcpy(result, s1, s1_len);
	memcpy(result + s1_len, s2, s2_len);
	result[s1_len + s2_len] = '\0';

	return (result);
}
