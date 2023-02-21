#include "main.h"
/**
 * _islower - check for lower case
 * @c: variable represent character to check
 * Return: for lowercase return 1 and 0 for otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
