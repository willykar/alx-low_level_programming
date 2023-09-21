#include "main.h"
/**
 * separator - checks whether a character is a seperator
 * @ch: string to be capitalized
 * Return: i if ch is a character or 0 if its not
 */
int separator(char ch)
{
	switch (ch)
	{
		case ' ':
		case '\t':
		case '\n':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
			return (1);
		default:
			return (0);
	}
}

/**
 * cap_string - capitalizes all words of a string
 * @str: string to be capitalized
 * Return: (str)
 */
char *cap_string(char *str)
{
	int i = 0;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - ('a' - 'A');
	}
	i++;

	while (str[i] != '\0')
	{
		if (separator(str[i - 1]) && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}
	return (str);
}
