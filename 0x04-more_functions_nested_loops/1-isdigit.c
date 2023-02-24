#include "main.h"

/**
 * _isdigit - fxn that checks for digit(0 - 9)
 * @c: the erturn char
 *
 * Return: 0
 */
int _isdigit(int c)
{
	if ((c >= 0) && (c < 10))
	{
		return (1);
	else
		return (0);
	}
}
