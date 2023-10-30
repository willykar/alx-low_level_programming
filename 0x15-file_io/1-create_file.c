#include "main.h"
#include <stddef.h>
/**
 * _strlen - counts the length of string
 * @str: the string used
 * Return: (length of the string)
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * create_file - a function that creates a file
 * @filename: the filename
 * @text_content: the null terminated string to write
 * Return: (1) on success, (-1) on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, written;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		written = write(file, text_content, _strlen(text_content));
		if (written == -1)
		{
			close(file);
			return (-1);
		}
		close(file);
		return (1);
	}
	else
	{
		close(file);
		return (1);
	}
}
