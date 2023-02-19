#include<stdio.h>
/**
 * Main - commas babe
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char y;

	for (y = 0; y < 10; y++)
	{
		putchar('0' + y);
		putchar(',');
	}
		putchar('\n');

	return (0);
}

