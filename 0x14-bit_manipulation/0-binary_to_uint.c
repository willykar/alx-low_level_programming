#include "main.h"
/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: pointer to an array of characters
 * Return: converted number or 0 if there is one
 * or more chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, a;

	if (b == NULL)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
		{
			return (0);
		}
		result = result * 2 + (b[a] - '0');
	}
	return (result);
}
