#include "main.h"
/**
 * puts2 - function that prints every character of a string
 * starting first chr followed by new line
 * @str: string
 */
void puts2(char *str)
{
	int count = 0;
	int a = 0;
	char *b = str;
	int c;

	while (*b != '\0')
	{
		b++;
		count++;
	}

	a = count - 1;
	for (c = 0; c <= a; c++)
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
	}
	Putchar('\n');
}
