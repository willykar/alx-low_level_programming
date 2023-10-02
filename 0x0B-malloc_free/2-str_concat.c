#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: input one
 * @s2: input two
 * Return: concat of s1 and s2 or NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
	char *result;
	int a, b, ds1, ds2, ds;

	ds2 = ds1 = 0;

	if (s1 != NULL)
	{
		a = 0;
		while (s1[a++] != '\0')
			ds1++;
	}

	if (s2 != NULL)
	{
		a = 0;
		while (s2[a++] != '\0')
			ds2++;
	}

	ds = ds2 + ds1;
	result = (char *)malloc(sizeof(char) * (ds + 1));
	if (result == NULL)
		return (NULL);
	for (a = 0; a < ds1; a++)
		result[a] = s1[a];
	for (b = 0; b < ds2; b++, a++)
		result[a] = s2[b];
	result[ds] = '\0';

	return (result);
}
