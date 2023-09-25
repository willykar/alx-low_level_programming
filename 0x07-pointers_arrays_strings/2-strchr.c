#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to a string
 * @c: charcter to look for in the string
 * Return: first occurence of c or null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
