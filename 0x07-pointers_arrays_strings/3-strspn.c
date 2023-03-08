#include "main.h"
/**
 * _strspn - Get
 * @s: The string to search
 * @accept: The prefix measure
 *
 * Return: Always
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[ndex])
			{
				bytes++;
				break;
			}
			
			else if (accept[index + 1] == '\0')
				return (bytes);
		}

		s++;
	}
	return (bytes);
}
