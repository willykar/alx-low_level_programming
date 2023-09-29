#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make
 *  change for an amount of money
 *  @argc: number of arguments
 *  @argv: pointer to an array of strings
 *  Return: 0
 */
int main(int argc, char *argv[])
{
	int a, amount, cent;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	a = 0;
	amount  = atoi(argv[1]);
	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}
	while (amount)
	{
		if (amount >= 25)
			cent = 25;
		else if (amount >= 10)
		{
			cent = 10;
		}
		else if (amount >= 5)
		{
			cent = 5;
		}
		else if (amount >= 2)
		{
			cent = 2;
		}
		else
		{
			cent = 1;
		}
		a += amount / cent;
		amount %= cent;
	}
	printf("%d\n", a);
	return (0);
}
