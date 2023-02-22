#include "main.h"
#include<stdlib.h>
/**
 *print_last_digit - just as the name goes....haha
 *
 *@x: for the return
 *Return: n (Success)
 */
int print_last_digit(int x)
{
	int n;

	n = abs(x % 10);

	_putchar(n + '0');

	return (n);
}

