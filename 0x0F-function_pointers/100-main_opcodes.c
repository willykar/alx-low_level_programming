#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - prints the program opcodes
 * @f: pointer to a character
 * @d: bytes to print
 * Return: nothing
 */
void print_opcodes(int num_bytes)
{
	int i;

	char *print_opcodes_addr = (char*)&print_opcodes;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", print_opcodes_addr[i] & 0xFF);
	}
	printf("\n");
}
/**
 * main - main function
 * @argc: argument count number of arguments
 * @argv: argument vector the arguments
 * Return: (0)
 */
int main(int argc, char **argv)
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	print_opcodes(num_bytes);
	return (0);
}
