#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * Return: 0
 */
int main(void)
{
	char upper, lower;

	lower = 'a';

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}

	upper = 'A';
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
