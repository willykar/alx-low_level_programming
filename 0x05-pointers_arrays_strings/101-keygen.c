#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for
 * the program 101-crackme
 * Return: 0
*/

int main(void)
{
	int password[100];

	int u, sum, v;

	sum = 0;
	srand(time(NULL));
	for (u = 0; u < 100; u++)
	{
		password[u] = rand() % 78;
		sum = sum + (password[u] + '0');
		putchar(password[u] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			v = 2772 - sum - '0';
			sum = sum + v;
			putchar(v + '0');
			break;
		}
	}
	return (0);
}
