#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: The first string
 * @s2: The Second string
 * Return: result of s1-s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	j = 0;
	while (s1[i] && (s1[i] == s2[j]))
	{
		i++;
		j++;
	}
	return (s1[i] - s2[j]);
}
