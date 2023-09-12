#include "main.h"

/**
 *  times_table - print the 9 times table starting with 0
*/
void times_table(void)
{
	int e, f, g, h, j;

	for (e = 0; e <= 9; e++)
	{
		for (f = 0; f <= 9; f++)
		{
			g = e * f;
			if (g > 9)
			{
				h = g % 10;
				j = (g - h) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(j + '0');
				_putchar(h + '0');
			}
			else
			{
				if (f != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(g + '0');
			}
		}
		_putchar('\n');
	}
}
