#include "main.h"
/**
 *  _strspn - gets the length of a prefix substring
 *  @s: string
 *  @accept: string to look for
 *  Return: number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s)
	{
		int occur = 0;
		int j = 0;

		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (!occur)
		{
			break;
		}
		count++;
		s++;
	}
	return (count);
}
