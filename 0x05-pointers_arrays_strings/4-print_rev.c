#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: pointer to string
 */
void print_rev(char *s)
{
	int length = 0;

	int a;

	while (s[length] != '\0')
	{
		length++;
	}

	for (a = length - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
