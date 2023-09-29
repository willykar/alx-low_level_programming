#include "main.h"
/**
 * _strncpy - function copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
