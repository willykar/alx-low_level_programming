#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @index: is the index, starting from 0 of the bit
 * you want to get
 * @n: number you are searching
 * Return: value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index >= 64)

		return (-1);
	bit_value = (n >> index) & 1;

	return (bit_value);
}
