#include "main.h"
/**
 * string_toupper - changes all lowercase letters to uppercase
 * @str: string to be converted to uppercase
 * Return: (str)
 */
char *string_toupper(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			str[a] = str[a] - ('a' - 'A');
		}
		a++;
	}
	return (str);
}
