#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: pointer to an array
 * @size: number of elements in the array
 * @cmp: pointer to a function that returns an int
 * Return: int
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
