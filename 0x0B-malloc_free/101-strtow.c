#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc - allocates space. Pointer to a pointer
 * @str: string
 * @length: length of string
 * @size: array size
 * Return: (a pointer to the array) or null if there is an error
 */
char **alloc(char *str, int length, int size)
{
	int b, c, wide;
	char **a, before;

	a = malloc((size + 1) * sizeof(char *));
	before = ' ';

	for (b = 0; b < size; b++)
	{
		while (c < length)
		{
			if (str[c] == ' ' && before != ' ')
			{
				before = ' ';
				c++;
				break;
			}
			if (str[c] != ' ')
				wide++;
			before = str[c];
			c++;
		}

		a[b] = malloc((wide + 1) * sizeof(char));
		if (a[b] == NULL)
		{
			return (NULL);
		}
		wide = 0;
	}
	a[size] = NULL;

	return (a);
}
/**
 * strtow - splits the string into words
 * @str: the string to be split
 * Return: a pointer to an array of strings or NULL
 */
char **strtow(char *str)
{
	char **a, before = ' ';
	int d, e = 0, k = 0, c = 0, length, size = 0;

	if (str == NULL || strlen(str) == 0)
		return (NULL);
	length = strlen(str);
	for (d = 0; d < length; d++)
	{
		if (str[d] != ' ')
			c = 1;
		if (str[d] != ' ' && before == ' ')
			size++;
		before = str[d];
	}
	a = alloc(str, length, size);
	if (a == NULL || c == 0)
		return (NULL);
	before = ' ';
	for (d = 0; d < size; d++)
	{
		while (e < length)
		{
			if (str[e] == ' ' && before != ' ')
			{
				before = ' ';
				e++;
				break;
			}
			if (str[e] != ' ')
			{
				a[d][k] = str[e];
				k++;
			}
			before = str[e];
			e++;
		}
		a[d][k] = '\0';
		k = 0;
	}
	return (a);
}
