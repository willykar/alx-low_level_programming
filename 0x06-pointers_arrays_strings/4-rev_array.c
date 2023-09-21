#include "main.h"
/**
 * reverse_array - reverses the array
 * @a: integer to be reversed
 * @n: number of elements of the array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int b, c;

	c = 0;
	b = n - 1;

	while (c < b)
	{
		int t = a[c];

		a[c] = a[b];
		a[b] = t;
		c++;
		b--;
	}
}
