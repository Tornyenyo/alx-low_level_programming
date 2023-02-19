#include<stdio.h>
#include<stdlib.h>
/**
 * main - code to run alphabet except q & e
 *
 * Return 0 (success)
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
	}
	putchar('\n');

	return (0);

}
