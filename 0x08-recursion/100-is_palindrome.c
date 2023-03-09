#include "main.h"
/**
 * _strlen_recursion - prints lenght of string
 * @s:
 * Return: Always
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * chk - check palidrome
 * @s: strin
 * @i: left index
 * @j: right index
 *
 * Return: Always
 */
int chk(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else 
			return (chk(s, i + 1, j - 1));
	else
		return (0);
}
/**
 * is_palidrom - check if s is a palidrome
 * @s: base address for string
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (chk(s, 0, _strlen_recursion(s) - 1));
}
