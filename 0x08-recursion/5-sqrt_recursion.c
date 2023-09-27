#include "main.h"
/**
 * the_sqrt - finds the natural square root of a number passed
 * @x: first integer to find the square root
 * @y: second integer
 * Return: natural square root
 */
int the_sqrt(int x, int y)
{
	if (x * x > y)
	{
		return (-1);
	}
	if (x * x == y)
	{
		return (x);
	}
	return (the_sqrt(x + 1, y));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number we get its square root
 * Return: -1 if n doesn't have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (the_sqrt(1, n));
}
