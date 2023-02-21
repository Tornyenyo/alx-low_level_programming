#include<stdio.h>
/**
 * main- Program to display alphabets
 *
 * Return: 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
