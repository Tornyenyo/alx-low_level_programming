#include<stdio.h>
/**
 * Main - commas babe
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int y;

	for (y = 0; y < 10; y++)
	{
		putchar('0' + y);

		if (y != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}

