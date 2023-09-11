#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0 success
*/

int main(void)
{
	int dig;

	for (dig = 0; dig < 10; dig++)
	{
		putchar(dig + '0');
		if (dig != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
