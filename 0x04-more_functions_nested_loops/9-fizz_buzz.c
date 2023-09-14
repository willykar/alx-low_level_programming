#include <stdio.h>
/**
 * main - entry point print FizzBuzz
 * Return: void
*/
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
			printf("FizzBuzz");
		else if (num % 5 == 0)
			printf("Buzz");
		else if (num % 3 == 0)
			printf("Fizz");
		else
			printf("%i", num);
		if (num < 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
