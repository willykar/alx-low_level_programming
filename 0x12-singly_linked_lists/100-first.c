#include <stdio.h>

void first(void) __attribute__((constructor));

/**
 * first - prints a sentence before the maini function is executed
 * Return: 0
 */
void first(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
