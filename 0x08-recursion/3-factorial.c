#include "main.h"
/**
 * factorial - factorial of a number n
 * @n: the number
 *
 * Return: Always
 */
int factorial(int n)
{
	int i;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		i = n * factorial(n - 1);
	}

	return (i);
}
