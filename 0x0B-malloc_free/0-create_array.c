#include "main.h"
#include <stdlib.h>
/**
 * create_array - pointer to an array of characters
 * @size: size of the array
 * @c: character to initialize the array
 * Return: array
*/
char *create_array(unsigned int size, char c)
{
	char *arr;

	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
