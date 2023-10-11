#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - prints the program opcodes
 * @f: pointer to a character
 * @d: bytes to print
 * Return: nothing
 */
void print_opcodes(char *f, int d)
{
	int e;

	for (e = 0; e < d; e++)
	{
		printf("%hhx", f[e]);
		if (e < d - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - main function
 * @argc: argument count number of arguments
 * @argv: argument vector the arguments
 * Return: (0)
 */
int main(int argc, char **argv)
{
	int e;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	e = atoi(argv[1]);
	if (e < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, e);
	return (0);
}
