#include "main.h"
/**
 * check_pal - checks if a substring is a palindrome
 * @s: string to be checked
 * @start: starting index of the substring
 * @end: ending index
 * Return: 1 if palindrome, 0 if not
 */

int check_pal(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}
	return (check_pal(s, start + 1, end - 1));
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate its length
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string we are checking
 * Return: (1) if it is, (0) if it's not
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (check_pal(s, 0, length - 1));
}
