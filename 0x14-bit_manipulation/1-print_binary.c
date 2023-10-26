#include "main.h"
#include <stdlib.h>
#include <unistd.h>
/**
 * print_binary - a function that
 * prints the binary representation of a number
 * @n: number to find its binary representation
 */
void print_binary(unsigned long int n)
{
	char i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	print_binary(n >> 1);
	i = (n & 1) ? '1' : '0';
	_putchar(i);
}
