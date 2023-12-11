#include <stdio.h>
/**
 * add - A function that adds two integers
 * @a: first integer
 * @b: second integer
 * Return: The sum
 */
int add(int a, int b)
{
	int result = 0;

	result = a + b;
	return (result);
}
/**
 * sub - A function that subtracts two integers
 * @a: first integer
 * @b: second integer
 * Return: The subtraction
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - A function that multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: The multiplication
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - A function that divides two integers
 * @a: first integer
 * @b: second integer
 * Return: The result of the division
 */
int div(int a, int b)
{
	return (a / b);
}
/**
 * mod - A function that gets the module of two integers
 * @a: first integer
 * @b: second integer
 * Return: The result of the modules
 */
int mod(int a, int b)
{
	return (a % b);
}
