#include "main.h"
/**
 * _puts - print a string folloed by a new line
 * @str: the string
 *
 * Return: 0 (Why always me)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
