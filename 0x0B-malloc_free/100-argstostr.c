#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: Argument Count
 * @av: Argument Vector
 * Return: ponter to a new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int mc = 0, a = 0, b = 0, c = 0;
	char *point;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (a < ac)
	{
		while (av[a][c])
		{
			mc++;
			c++;
		}

		c = 0;
		a++;
	}

	point = malloc((sizeof(char) * mc) + ac + 1);

	a = 0;
	while (av[a])
	{
		while (av[a][c])
		{
			point[b] = av[a][c];
			b++;
			c++;
		}

		point[b] = '\n';

		c = 0;
		b++;
		a++;
	}

		b++;
		point[b] = '\0';
		return (point);
}
