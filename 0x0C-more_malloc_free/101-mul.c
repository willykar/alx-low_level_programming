#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);
/**
 * find_len - find length od string
 * @str: string
 * Return: (length of the string)
*/
int find_len(char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return (length);
}
/**
 * create_xarray - Creates an array of chars and initializes it with x
 * @size: size of array
 * Description: if space is insufficient function exits with a status of 98
 * Return: pointer to array
*/
char *create_xarray(int size)
{
	char *array;
	int i;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);
	for (i = 0; i < (size - 1); i++)
		array[i] = 'x';
	array[i] = '\0';
	return (array);
}
/**
 * iterate_zeroes - Iterates through a string of numbers containing 0
 * @str: string
 * Return: A pointer to the next elemnt that is not a zero
*/
char *iterate_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;
	return (str);
}
/**
 * get_digit - Converts a digit to an int
 * @c: The character to convert
 * Description: function exits with a status of 98 if c
 * is a non-digit
 * Return: converted integer
 */
int get_digit(char c)
{
	int d = c - '0';

	if (d < 0 || d > 9)
	{
		printf("Error\n");
		exit(98);
	}
	return (d);
}
/**
 * get_prod - Multiplies a string of numbers by a digit
 * @prod: Buffer to store the result
 * @mult: String of number
 * @digit: Single digit.
 * @zeroes: The necessary number leading to zero
 */
void get_prod(char *prod, char *mult, int digit, int zeroes)
{
	int mult_length, number, tens = 0;

	mult_length = find_len(mult) - 1;
	mult += mult_length;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}
	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}
	for (; mult_length >= 0; mult_length--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}
		number = (*mult - '0') * digit;
		number += tens;
		*prod = (number % 10) + '0';
		tens = number / 10;
	}
	if (tens)
		*prod = (tens % 10) + '0';
}
/**
 * add_nums - Adds the numbers
 * @final_prod: The buffer storing the product
 * @next_prod: The next product to add
 * @next_len: Length of next_product
 */
void add_nums(char *final_prod, char *next_prod, int next_len)
{
	int number, tens = 0;

	while (*(final_prod + 1))
		final_prod++;
	while (*(next_prod + 1))
		next_prod++;
	for (; *final_prod != 'x'; final_prod--)
	{
		number = (*final_prod - '0') + (*next_prod - '0');
		number += tens;
		*final_prod = (number % 10) + '0';
		tens = number / 10;
		next_prod--;
		next_len--;
	}
	for (; next_len >= 0 && *next_prod != 'x'; next_len--)
	{
		number = (*next_prod - '0');
		number += tens;
		*final_prod = (number % 10) + '0';
		tens = number / 10;
		final_prod--;
		next_prod--;
	}
	if (tens)
		*final_prod = (tens % 10) + '0';
}

/**
 * main - Multiplies two positive numbers
 * @argv: The number of arguments passed to the program
 * @argc: count of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *final_prod, *next_prod;
	int size, i, d, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = iterate_zeroes(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = iterate_zeroes(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = find_len(argv[1]) + find_len(argv[2]);
	final_prod = create_xarray(size + 1);
	next_prod = create_xarray(size + 1);

	for (i = find_len(argv[2]) - 1; i >= 0; i--)
	{
		d = get_digit(*(argv[2] + i));
		get_prod(next_prod, argv[1], d, zeroes++);
		add_nums(final_prod, next_prod, size - 1);
	}
	for (i = 0; final_prod[i]; i++)
	{
		if (final_prod[i] != 'x')
			putchar(final_prod[i]);
	}
	putchar('\n');

	free(next_prod);
	free(final_prod);

	return (0);
}
