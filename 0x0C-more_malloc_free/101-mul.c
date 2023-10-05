#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * multiply - function that multiplies two numbers
 * @num1: first number
 * @num2: second number
 * Return: result of multiplication
*/
unsigned long multiply(unsigned long num1, unsigned long num2)
{
	return (num1 * num2);
}
/**
 * isNumeric - check for an integer
 * @str: pointer to a string
 * Return: 0 if successful i if not
*/
int isNumeric(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/**
 * main - main function
 * @argc: the number of arguments
 * @argv: argument ventor
 * Return: 0
*/
int main(int argc, char *argv[])
{
	char *num1_str, *num2_str;
	unsigned long num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	num1_str = argv[1];
	num2_str = argv[2];

	if (!isNumeric(num1_str) || !isNumeric(num2_str))
	{
		printf("Error\n");
		return (98);
	}
	num1 = strtoull(num1_str, NULL, 10);
	num2 = strtoull(num2_str, NULL, 10);
	result = multiply(num1, num2);
	printf("%lu\n", result);
	return (0);
}
