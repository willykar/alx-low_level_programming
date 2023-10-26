#include "main.h"
/**
 * flip_bits - a function returns the number of bits you would need to flip
 * to get from one number to another
 * @n: the first number
 * @m: the second number
 * Return: the number of bits you would need to flip to get
 * from one number to another
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a;
	unsigned long int count;

	a = n ^ m;
	for (count = 0; a > 0;)
	{
		if ((a & 1) == 1)
			count++;
		a = a >> 1;
	}

	return (count);
}
