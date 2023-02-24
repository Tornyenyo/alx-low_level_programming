#include "main.h"

/**
 * print_diagonal - accross the terminal
 * @n: number to return
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		-putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
