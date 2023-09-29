#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - adds positive numbers
 * @argc: number of arguments passed
 * @argv: pointer to an array of strings
 * Return: (0) success (1) if error
 */
int main(int argc, char *argv[])
{
	int a, b, sum;

	sum = 0;

	for (a = 1; a < argc ; a++)
	{
		for (b = 0; argv[a][b] != '\0' ; b++)
		{
			if (argv[a][b] < 47 || argv[a][b] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
