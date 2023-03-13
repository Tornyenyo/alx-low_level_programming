#include<stdio.h>
#include<stdlib.h>
/**
 * main - multiple positive number
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: Always
 */
int main(int argc, char *argv[])
{
	int i, n, sum = 0;
	char *ptr;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; argv[i]; i++)
	{
		n = strtol(argv[i], &ptr, 10);
		if (*ptr)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += n;
		}
	}
	printf("%d\n", sum);

	return (0);
}
