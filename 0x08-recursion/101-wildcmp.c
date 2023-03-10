#include "main.h"
/**
 * chk - check if strings are identical
 * @s1: S1 base address
 * @s2: S2 base address
 * @i: Left index
 * @j: index
 * Return: Always
 */
int chk(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (chk(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (chk(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (chk(s1, s2, i + 1, j) || chk(s1, s2, i, j + 1));
	return (0);
}
/**
 * wildcmp - check if string can be considere identical
 * @s1: base address for string
 * @s2: base address for string
 *
 * Return: Always
 */
int wildcmp(char *s1, char *s2)
{
	return (chk(s1, s2, 0, 0));
}
