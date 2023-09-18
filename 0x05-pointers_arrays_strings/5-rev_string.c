#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to the string to be reversed
*/
void rev_string(char *s)
{
	int length = 0;

	int a;

	while (s[length] != '\0')
	{
		length++;
	}
	for (a = 0; a < length / 2; a++)
	{
		char temp = s[a];

		s[a] = s[length - a - 1];
		s[length - a - 1] = temp;
	}
}
