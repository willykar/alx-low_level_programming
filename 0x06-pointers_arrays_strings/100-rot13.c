#include "main.h"
/**
 * rot13 - a function that encodes a string using rot13
 * @str: string to be encoded
 * Return: (str)
 */
char *rot13(char *str)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13_alphabet[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	int a = 0;

	while (str[a] != '\0')
	{
		char *pos = alphabet;
		char *rot13_pos = rot13_alphabet;

		while (*pos != '\0')
		{
			if (*pos == str[a])
			{
				str[a] = *rot13_pos;
				break;
			}
			pos++;
			rot13_pos++;
		}
		a++;
	}
	return (str);
}
