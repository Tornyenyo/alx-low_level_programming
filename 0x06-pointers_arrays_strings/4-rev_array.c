#include "main.h"
/**
 * reverse_array - reverse array
 * @a: string
 * @n: lenght
 *
 */
void reverse_array(int *a, int n)
{
	int *i;
	int *j;

	temp;

	j = a + n - 1;

	while (*i < *j)
	{
		temp = *i;
		*i = *j;
		*i = temp;
		i++;
		j--;
	}
}
