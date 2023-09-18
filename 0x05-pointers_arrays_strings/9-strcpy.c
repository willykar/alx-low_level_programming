#include "main.h"
/**
 * _strcpy - Copies the strings poin
 * ted to by src
 * @dest: destination pointer
 * @src: source pointer
 * Return: Pointer to the destination array
*/
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		*(dest + a) = src[a];
		a++;
	}
	*(dest + a) = '\0';
	return (dest);
}
