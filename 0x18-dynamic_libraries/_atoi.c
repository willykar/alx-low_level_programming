#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: Pointer to a string
 * Return: 0 if no numbers found in the string
*/
int _atoi(char *s)
{
	int m, n, o, length, x, numb;

	m = 0;
	n = 0;
	o = 0;
	length = 0;
	x = 0;
	numb = 0;

	while (s[length] != '\0')
		length++;
	while (m < length && x == 0)
	{
		if (s[m] == '-')
			++n;
		if (s[m] >= '0' && s[m] <= '9')
		{
			numb = s[m] - '0';
			if (n % 2)
				numb = -numb;
			o = o * 10 + numb;
			x = 1;
			if (s[m + 1] < '0' || s[m + 1] > '9')
				break;
			x = 0;
		}

		m++;
	}
	if (x == 0)
		return (0);
	return (o);
}
