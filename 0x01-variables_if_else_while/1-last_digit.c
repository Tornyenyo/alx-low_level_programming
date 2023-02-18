#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -compare the last digits of a generated random number with 5,6,0
 *
 *
 *Return: 0 (success)
 */
int main(void)
{
	int n, LastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	LastDigit = n % 10;

	if (LastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, LastDigit);
	}
	else if (LastDigit < 0 && LastDigit != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LastDigit);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, LastDigit);
	}

	return (0);
}
