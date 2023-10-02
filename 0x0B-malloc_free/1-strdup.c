#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: source string
 * Return: returns a pointer to the duplicated strng
 * NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	 int m, n = 0;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	m = 0;

	while (str[m] != '\0')
	{
		m++;
	}
	copy = malloc(sizeof(char) * (m + 1));

	if (copy == NULL)
	{
		return (NULL);
	}

	for (n = 0; str[n]; n++)
	{
		copy[n] = str[n];
	}
	return (copy);
}
