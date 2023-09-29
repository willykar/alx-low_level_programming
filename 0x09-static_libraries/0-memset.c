#include "main.h"
/**
 *  _memset - fills the memory with a constant byte
 *  @s: pointer
 *  @b: constant byte
 *  @n: bytes of the memory area pointed to by s
 *  Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}
	return (s);
}
