#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: integer to allocate size
 * Return: pointer to the allocated memory created
*/
void *malloc_checked(unsigned int b)
{
	void *result;

	result = malloc(b);

	if (result == NULL)
		exit(98);
	return (result);
}
