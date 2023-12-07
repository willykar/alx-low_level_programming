#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - A function that generates a key depending on
 * a username for crackme5
 * @argc: The number of arguments passed to a function
 * @argv: The arguments passed to the function
 * Return: (0) on success ,(1) on failure
 */
int main(int argc, char *argv[])
{
	unsigned int indx, bta;
	size_t length, add;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	length = strlen(argv[1]);
	p[0] = l[(length ^ 59) & 63];
	for (indx = 0, add = 0; indx < length; indx++)
		add += argv[1][indx];
	p[1] = l[(add ^ 79) & 63];
	for (indx = 0, bta = 1; indx < length; indx++)
		bta *= argv[1][indx];
	p[2] = l[(bta ^ 85) & 63];
	for (bta = argv[1][0], indx = 0; indx < length; indx++)
		if ((char)bta <= argv[1][indx])
			bta = argv[1][indx];
	srand(bta ^ 14);
	p[3] = l[rand() & 63];
	for (bta = 0, indx = 0; indx < length; indx++)
		bta += argv[1][indx] * argv[1][indx];
	p[4] = l[(bta ^ 239) & 63];
	for (bta = 0, indx = 0; (char)indx < argv[1][0]; indx++)
		bta = rand();
	p[5] = l[(bta ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}
