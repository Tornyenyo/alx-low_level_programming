#include<stdio.h>
/**
 * main - letx geauxx
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a < 9; a++)
	{
		for (b = 1; b < 10; b++)
		{
			for (c = 2; c < 10; c++)
			if (a < b && b < c)
			{
			putchar('0' + a);
			putchar('0' + b);
			putchar('0' + c);

			if (a != 7 || b != 8 || c != 9)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
