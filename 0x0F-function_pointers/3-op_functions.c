#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - sum of a and b
  * @a: a
  * @b: b
  *
  * Return: Always
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - return diff of a and b
  * @a: a
  * @b: b
  *
  * Return: Always
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - product a & b
  * @a: a
  * @b: b
  *
  * Return: Always
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divide a / b
  * @a: a
  * @b: b
  *
  * Return: Always
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - remainder
  * @a: a
  * @b: b
  *
  * Return: Always
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}

