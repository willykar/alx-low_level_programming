#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, elements_arr, *new_array;

	if (min > max)
	{
		return (NULL);
	}

	elements_arr = max - min + 1;

	new_array = malloc(elements_arr * sizeof(int));

	if (new_array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < elements_arr; i++)
	{
		new_array[i] = min + i;
	}
	return (new_array);
}
