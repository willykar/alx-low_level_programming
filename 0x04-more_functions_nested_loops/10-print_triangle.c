#include "main.h"
/**
 * print_triangle - prints a triangle
 * followed by a new line
 * @size: size of triangle
 * Return: void.
 */
void print_triangle(int size)
{
	int a, b, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (space = 1; space <= (size - a); space++)
			{
				_putchar(' ');
			}
			for (b = 1; b <= a; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
