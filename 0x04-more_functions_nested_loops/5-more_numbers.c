#include "main.h"
/**
 * more_numbers - prints 0 - 14 10 times
 * followed by a new line
 * Return: void
*/
void more_numbers(void)
{
	int i, j;

	i = 1;
	while (i <= 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
