#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements to allocate
 * @size: size of elements
 * Return: nothing
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_space;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total_space = nmemb * size;

	ptr = malloc(total_space);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, total_space);

	return (ptr);
}
