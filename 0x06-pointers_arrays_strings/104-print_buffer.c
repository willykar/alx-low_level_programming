#include <stdio.h>
#include <ctype.h>
/**
 * print_buffer -function that prints a buffer
 * @b: points to the buffer
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	int a, c;

	for (a = 0; a < size; a += 10)
	{
		printf("%08x ", a);
		for (c = 0; c < 10; c++)
		{
			if (a + c < size)
			{
				printf("%02x", (unsigned char)b[a + c]);
				if (c % 2 == 1)
				{
					printf(" ");
				}
			}
			else
			{
				printf("   ");
			}
		}
		printf(" ");
		for (c = 0; c < 10; c++)
		{
			if (a + c < size)
			{
				char d = b[a + c];
				if (isprint(c))
				{
					printf("%c", d);
				}
				else
				{
					printf(".");
				}
			}
		}
		printf("\n");
	}
}
