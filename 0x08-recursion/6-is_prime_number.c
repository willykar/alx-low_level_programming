#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: number to find if it is a primenumber
 * get_prime - checks if a number is prime
 * Return: (1) if n is a prime number
 */
int get_prime(int n, int i);
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (get_prime(n, n - 1));
}
/**
 * get_prime - checks if a number is prime
 * @i: integer
 * @n: number that is checked if is a primenumber
 * Return: 1 if prime 0 if not
 */
int get_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (get_prime(n, i - 1));
}
