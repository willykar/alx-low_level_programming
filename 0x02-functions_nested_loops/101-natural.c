#include <stdio.h>
/**
 * main - list all the natural numbers that are multiples of 3 or 5
 * Return:(0)
*/
int main(void)
{
	int n1, sum = 0;

	while (n1 < 1024)
	{
		if ((n1 % 3 == 0) || (n1 % 5 == 0))
		{
			sum += n1;
		}
		n1++;
	}
	printf("%d\n", sum);
	return (0);
}
