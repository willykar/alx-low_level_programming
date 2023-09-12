#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: to be checked if it is a character
 * Return: (1) if c is a letter
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
