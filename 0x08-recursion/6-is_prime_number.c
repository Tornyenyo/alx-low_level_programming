#include "main.h"

int chk(int num, int div);
int is_prime_number(int n);

/**
 * chk - check if number is divisible
 * @num: teh number
 * @div: the divisor
 *
 * Return: If the number is divibke  by 0, if number is not divisible by 1
 *
 */
int chk(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (chk(num, div + 1));
}
/**
 * is_prime_number - Checks if number is prime
 * @n: teh number to check
 *
 * Return: is prime 0, else 1;
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (chk(n, div));
}
