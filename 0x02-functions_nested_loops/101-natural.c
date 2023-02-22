#include<stdio.h>
/**
 * main - add multiples of 3 and 5 less that 1024
 * Return: 0 (success)
 */
int main(void)
{
	int sum;

	for (int i = 1; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
}
