#include "main.h"
/**
 * clear_bit - function sets the value of a
 * bit to 0 at a given index
 * @n: number to set the value of bit
 * @index: is the index, starting from
 * 0 of the bit you want to set
 * Return: 1 if success or  -1 if an error occured
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = 1;
	mask = mask << index;

	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);

	if (((*n >> index) & 1) == 1)
		*n = mask ^ *n;

	return (1);
}
