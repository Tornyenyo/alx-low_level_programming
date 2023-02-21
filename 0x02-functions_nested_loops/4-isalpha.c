#include "main.h"
/**
 * _isalpha - check for lower case
 * @c: variable represent character to check
 * Return: for lowercase or uppercase return 1 and 0 for otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
