#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: argument count number of arguments
 * @argv: argument vector the arguments
 * Return: (0)
 */
int main(int argc, char **argv)
{
	int a, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < a; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < a - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
