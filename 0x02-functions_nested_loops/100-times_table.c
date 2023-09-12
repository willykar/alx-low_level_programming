#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: n times for the table
*/
void print_times_table(int n)
{
int e, f, g;
if (n >= 0 && n <= 15)
{
for (e = 0; e <= n; e++)
{
for (f = 0; f <= n; f++)
{
g = f * e;
if (f == 0)
{
_putchar(g + '0');
}
else if (g < 10 && e != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(g + '0');
}
else if (g >= 10 && g < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((g / 10) + '0');
_putchar((g % 10) + '0');
}
else if (g >= 100)
{
_putchar(',');
_putchar(' ');
_putchar((g / 100) + '0');
_putchar(((g / 10) % 10) + '0');
_putchar((g % 10) + '0');
}
}
_putchar('\n');
}
}
}
