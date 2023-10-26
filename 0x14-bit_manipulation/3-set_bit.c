#include "main.h"
#include <stdio.h>
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: variable name that holds a numeric value
 * @index: is the index, starting from 0
 * of the bit you want to set
 * Return: 1 if success or -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
