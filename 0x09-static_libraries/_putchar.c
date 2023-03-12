#include "main.h"
#include<unistd.h>
/**
 * _putchar - displays character
 * @c: The character to print
 *
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
