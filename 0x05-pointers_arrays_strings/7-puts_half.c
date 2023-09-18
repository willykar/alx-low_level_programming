#include "main.h"
/**
 * puts_half - prints the second half of the string followed by a new line
 * @str: pointer to a string
*/
void puts_half(char *str)
{
	int i, j, length;

	length = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	j = (length / 2);

	if ((length % 2) == 1)
	{
		j = ((length + 1) / 2);
	}
	for (i = j; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
