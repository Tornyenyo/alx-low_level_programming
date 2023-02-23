#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * positive_or_negative - This codes uses if to check weight of 
 * random number
 *
 * Return: 0 (Success)
 */
void positive_or_negative(int i)
{

	if (i > 0)
		printf("%d is positive\n", i);
	if (i < 0)
		printf("%d is negative\n", i);
	if (i == 0)
		printf("%d is zero\n", i);
}
