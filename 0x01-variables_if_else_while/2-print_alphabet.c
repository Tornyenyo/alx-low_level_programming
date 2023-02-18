#include<stdio.h>
#include<stdlib.h>
/**
 * main - alphabets lower and upper
 *
 * Return success(0)
 */

int main(void)
{
	char a;

	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(a);
		putchar('\n');
	}
	for (a = 'a'; a <= 'z'; a++)
		putchar(a);

	return (0);
}
