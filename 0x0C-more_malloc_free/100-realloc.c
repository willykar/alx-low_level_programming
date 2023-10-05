#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * @ptr: a pointer to memory
 * Return: pointer to the new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *temp_ptr;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
		{
			return (NULL);
		}
		free(ptr);
		return (new_ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}

	temp_ptr = ptr;

	for (a = 0; a < old_size; a++)
	{
		new_ptr[a] = temp_ptr[a];
	}
	free(ptr);
	return (new_ptr);
}
