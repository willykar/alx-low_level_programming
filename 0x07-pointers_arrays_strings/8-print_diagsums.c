#include <stdio.h>
#include "main.h"
/**
 * print_diagsums -  prints the sum of the two diagonals of a
 * square matrix of integers
 * @a: pointer to an integer array
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int primarySum = 0;
	int secondarySum = 0;
	int b;

	for (b = 0; b < size; b++)
	{
		primarySum += a[b * size + 1];
	}
	for (b = 0; b < size; b++)
	{
		secondarySum += a[b * size + (size - 1 - b)];
	}
	printf("%d, %d\n", primarySum, secondarySum);
}
