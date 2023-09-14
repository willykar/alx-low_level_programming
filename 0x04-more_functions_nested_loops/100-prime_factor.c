#include <stdio.h>
/**
 * main - prints the largest prime factor of 612852475143
 *Return: (0) success
*/
int main(void)
{
	long int a, i, prime_factor;

	prime_factor = -1;

	a = 612852475143;

	while (a % 2 == 0)
	{
		prime_factor = 2;
		a = a / 2;
	}
	for (i = 3; i <= a / 2; i = i + 2)
	{
		while (a % i == 0)
		{
			prime_factor = i;
			a = a / i;
		}
	}
	if (a > 2)
		prime_factor = a;
	printf("%ld\n", prime_factor);
	return (0);
}
