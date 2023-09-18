#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: first pointer to an int
 * @b: second pointer to an int
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
