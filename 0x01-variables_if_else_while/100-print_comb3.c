#include<stdio.h>
/**
 * main - do it
 *
 * Return (0) Success
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 9; a++)
	{
		for (b = 1; b < 10; b++)
		{
			if (a != b && b > a)
			{
				putchar('0' + a);
				putchar('0' + b);
				putchar(',');
				putchar(' ');
			}
		}

	}

	return (0);
}
