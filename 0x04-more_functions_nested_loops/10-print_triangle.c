#include "main.h"
/**
 * print_triangle - print traingle
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; i++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			-putchar('\n');
		}
	}
}


