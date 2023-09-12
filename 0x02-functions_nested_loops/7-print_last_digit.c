#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number from which we get the last digit from
 * Return: The value of the last digit
*/

int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (n < 0)
	{
		a = a * -1;
	}
	_putchar(a + '0');
	return (a);
}
