#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: string to look for the needle substring
 * @needle: substring to look for
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *st1, *st2;

	while (*haystack != '\0')
	{
		st1 = haystack;
		st2 = needle;

		while (*haystack != '\0' && *st2 != '\0' && *haystack == *st2)
		{
			haystack++;
			st2++;
		}
		if (*st2 == '\0')
		{
			return (st1);
		}
		haystack++;
	}
	return (0);
}
