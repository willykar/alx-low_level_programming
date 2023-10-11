#include "3-calc.h"
/**
 * op_add - function that adds two numbers a and b
 * @a: first number to be added
 * @b: second number to be added
 * Return: (result after addition)
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function that subctracts two numbers
 * @a: first number to be subtracted
 * @b: second number to be subtracted
 * Return: (result after difference)
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiplies two numbers
 * @a: first number to be multiplied
 * @b: second number to be multiplied
 * Return: (result after multiplication)
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides two numbers
 * @a: first number for division
 * @b: second number for division
 * If the user tries to divide / or % by 0, print Error, followed,
 * by a new line, and exit with the status (100)
 * Return: (division)
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
 * op_mod - function that calculates the modulus of two numbers
 * @a: first number for modulus
 * @b: second number for modulus
 * Return: (result)
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
