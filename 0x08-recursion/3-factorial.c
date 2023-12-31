#include "main.h"
/**
 * factorial -  returns the factorial of a given number
 * @n: number to find factorial of
 * Return: -1 if n is lower than 0 else (0)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
