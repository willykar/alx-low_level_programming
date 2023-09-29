#include <stdio.h>
#include "main.h"
/**
 * main - prints its name followed by a new line
 * @argc: number of arguments
 * @argv: pointer to an array of strings
 * Return: (0)
*/
int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", argv);
	return (0);
}
