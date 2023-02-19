#include<stdio.h>
/**
 * main - Okay we go
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char a, b;

	for (a = 0; a < 10; a++)
	{
		putchar('0' + a);

	}
	for (b = 'a'; b < 'g'; b++)
	{
		putchar(b);
	}
	putchar('\n');

	return (0);

}
