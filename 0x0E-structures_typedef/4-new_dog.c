#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - gets and returns the length of a string
 * @s: string to find the length
 * Return: length of the string
*/
int _strlen(char *s)
{
	int m;

	m = 0;

	while (s[m] != '\0')
	{
		m++;
	}

	return (m);
}
/**
 * _strcpy - copies the string pointed to by src
 * copies the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer to copy the string
 * @src: string that is copied
 * Return: a pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (src[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new struct dog
 * @name: member name of the dog
 * @age: member age of the dog
 * @owner: member owner of the dog
 * Return: pointer to new struct dog (Success), NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int d1, d2;

	d1 = _strlen(name);
	d2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (d1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (d2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
