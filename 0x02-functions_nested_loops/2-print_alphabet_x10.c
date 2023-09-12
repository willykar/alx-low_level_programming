#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 * Return: (0)
*/
void print_alphabet_x10(void)
{
	int i = 0;
	
	while (i < 10)
	{
		char j;
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	return (0);
}
