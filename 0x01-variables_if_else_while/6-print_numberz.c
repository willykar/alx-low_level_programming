#include <stdio.h>
/**
 * main - prints single digit numbers of base 10 starting from 0
 * Return: 0
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
