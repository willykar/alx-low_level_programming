#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @i: Number to be computed
 * Return: Absolute value of i
*/

int _abs(int i)
{
	if (i < 0)
	{
		int abs_value;

		abs_value = i * -1;
		return (abs_value);
	}
	return (i);
}
