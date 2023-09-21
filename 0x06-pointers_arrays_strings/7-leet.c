#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @str: string to be encoded into 1337
 * Return:( str)
 */

char *leet(char *str)
{
	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";
	int a = 0;

	while (str[a] != '\0')
	{
		char *pos = leetLetters;
		char *num = leetNums;

		while (*pos)
		{
			if (*pos == str[i])
			{
				str[a] = *num;
				break;
			}
			pos++;
			num++;
		}
		a++;
	}
	return (str);
}
