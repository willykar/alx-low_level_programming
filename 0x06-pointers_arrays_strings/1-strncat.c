#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: bytes
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] >= n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
