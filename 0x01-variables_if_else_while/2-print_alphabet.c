#include<stdio.h>
#include<stdlib.h>
/**
 * main-
 *
 * Return success(0)
 */

int main(void)
{
	char a;

	for (a = 'A'; a <= 'Z'; a++)
		putchar(a);
	for (a = 'a'; a <= 'z'; a++)
		putchar(a);

	return (0);
}
