#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - returns the length of a string
 *
 * @s: string to evaluate
 * Return: the length of the string
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
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 * Return:pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
        int d, m;

        d = 0;
        while (src[d] != '\0')
        {
                d++;
        }
        for (m = 0; m < d; m++)
        {
                dest[m] = src[m];
        }
        dest[m] = '\0';

        return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
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
