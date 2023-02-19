#include<stdio.h>
/**
 * main - putchar for integers
 *
 * Return: 0 (succes)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar('0' + a);
	}

	putchar('\n');

	return (0);
}
