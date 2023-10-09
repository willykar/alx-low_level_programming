#include <stdio.h>
/**
 * main - prints the name of the file it was compiled from,
 * followed by a new line
 * Return: (0) success
 */
int main(void)
{
        printf(__FILE__);
        printf("\n");
        return (0);
}
