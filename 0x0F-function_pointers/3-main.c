#include <stdlib.h>
#include "3-calc.h"

/**
 * main - starting point
 * @argc: number of arguments passed
 * @argv: pointer to array of arguments (argument vector)
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a1, a2, c;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a1 = atoi(argv[1]);
	a2 = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	c = f(a1, a2);
	printf("%d\n", c);
	return (0);
}
