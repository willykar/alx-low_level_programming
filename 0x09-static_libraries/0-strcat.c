#include "main.h"
/**
 * char *_strcat - concentrates two strings
 * @dest: destination string
 * @src: source string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int m, n;

	m = 0;
	n = 0;

	while (dest[m] != '\0')
	{
		m++;
	}
	while (src[n] != '\0')
	{
		dest[m] = src[n];
		m++, n++;
	}
	dest[m] = '\0';
	return (dest);
}
