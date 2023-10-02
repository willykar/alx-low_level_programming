#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -  returns a pointer to a 2
 * dimensional array of integers
 * @width: variable width
 * @height: variable height
 * Return: pointer to a 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int m, n, o, p;

	int **matrix;

		if (width <= 0 || height <= 0)
			return (NULL);

	matrix = malloc(sizeof(int *) * height);

		if (matrix == NULL)
		{
			free(matrix);
			return (NULL);
		}
		for (m = 0; m < height; m++)
		{
			matrix[m] = malloc(sizeof(int) * width);

			if (matrix[m] == NULL)
			{
				for (n = m; n >= 0; n--)
				{
					free(matrix[n]);
				}

				free(matrix);
				return (NULL);
			}
		}

		for (o = 0; o < height; o++)
		{
			for (p = 0; p < width; p++)
			{
				matrix[o][p] = 0;
			}
		}

		return (matrix);
}
