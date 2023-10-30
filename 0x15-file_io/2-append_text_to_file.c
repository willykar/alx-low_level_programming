#include "main.h"
#include <stddef.h>
/**
 * _strlen - counts the length of the string
 * @str: string
 * Return: length of string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: filename
 * @text_content: to be appended
 * Return: (1) on success, (-1) on failure (-1) if filename is NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, written;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
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
