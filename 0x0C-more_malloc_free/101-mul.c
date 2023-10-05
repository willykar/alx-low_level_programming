#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _puts - prints out a string that is followed by a new line
 * @str: pointer to a string
 * Return: Nothing
*/
void _puts(char *str)
{
	int i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}
/**
 * _atoi - converts string to an integer
 * @s: pointer to string
 * Return: integer
 */
int _atoi(const char *s)
{
	int si = 1;
	unsigned long int result = 0, firstNum, a;

	for (firstNum = 0; !(s[firstNum] >= 48 && s[firstNum] <= 57); firstNum++)
	{
		if (s[firstNum] == '-')
		{
			si *= -1;
		}
	}
	for (a= firstNum; s[a] >= 48 && s[a] <= 57; a++)
	{
		result *= 10;
		result += (s[a] - 48);
	}
	return (si * result);
}
/**
 * print_int - prints an integer.
 * @n: int
 * Return: 0
 */
void print_int(unsigned long int n)
{
	unsigned long int divisor = 1, i, r;
	for (i = 0; n / divisor > 9; i++, divisor *= 10)
		;
	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{
		r = n / divisor;
		_putchar('0' + r);
	}
}
/**
 * main - prints the result of multiplication
 * @argc: int
 * @argv: list of arguments
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');
	return (0);
}
