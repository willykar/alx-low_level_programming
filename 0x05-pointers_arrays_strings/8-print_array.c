#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers followed by
 * a new line
 * @a: pointer to the array
 * @n: length of the array
*/

void print_array(int *a, int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		printf("%d", a[a]);
		if (a < n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
