#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _print - move 1 character to the left then print
 * @str: string to be moved
 * @l: string size
 * Return: Nothing
 */

void _print(char *str, int l)
{
	int a, b;

	a = b = 0;
	while (a < l)
	{
		if (str[a] != '0')
			b = 1;
		if (b || a == l - 1)
			_putchar(str[a]);
		b++;
	}

	_putchar('\n');
	free(str);
}
/**
 * mul - multiplies a char then places the answer to a pointer
 * @n: char to multiply
 * @num: string to be multiplied
 * @num_index: last index of num
 * @dest: stores multiplication
 * @dest_index: the highest index to start the addition
 * Return: (pointer to dest), or NULL
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int j, k, multi, mulrem, add, addrem;

	mulrem = addrem = 0;
	for (j = num_index, k = dest_index; j >= 0; j--, k--)
	{
		multi = (n - '0') * (num[j] - '0') + mulrem;
		mulrem = multi / 10;
		add = (dest[k] - '0') + (multi % 10) + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	for (addrem += mulrem; k >= 0 && addrem; k--)
	{
		add = (dest[k] - '0') + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	if (addrem)
	{
		return (NULL);
	}
	return (dest);
}

/**
 * check_for_digits - checks if it is a digit
 * @av: pointer to arguments
 * Return: 0 if digit , 1 if not digit
 */
int check_for_digits(char **av)
{
	int a, b;

	for (a = 1; a < 3; a++)
	{
		for (b = 0; av[a][b]; a++)
		{
			if (av[a][b] < '0' || av[a][b] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * init - initializes a string
 * @str: sting to be initialized
 * @l: length of a string
 * Return: noting
 */

void init(char *str, int l)
{
	int a;

	for (a = 0; a < l; a++)
		str[a] = '0';
	str[a] = '\0';
}
/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: argument vector containing arguments
 * Return: 0, or exit status of 98 if failure
 */

int main(int argc, char *argv[])
{
	int l1, l2, ln, ti, i;
	char *a;
	char *t;
	char b[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
		for (ti = 0; b[ti]; ti++)
			_putchar(b[ti]);
		exit(98);
	}
	for (l1 = 0; argv[1][l1]; l1++)
		;
	for (l2 = 0; argv[2][l2]; l2++)
		;
	ln = l1 + l2 + 1;
	a = malloc(ln * sizeof(char));
	if (a == NULL)
	{
		for (ti = 0; b[ti]; ti++)
			_putchar(b[ti]);
		exit(98);
	}
	init(a, ln - 1);
	for (ti = l2 - 1, i = 0; ti >= 0; ti--, i++)
	{
		t = mul(argv[2][ti], argv[1], l1 - 1, a, (ln - 2) - i);
		if (t == NULL)
		{
			for (ti = 0; b[ti]; ti++)
				_putchar(b[ti]);
			free(a);
			exit(98);
		}
	}
	_print(a, ln - 1);
	return (0);
}
