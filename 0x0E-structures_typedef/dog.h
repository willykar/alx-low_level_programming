#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog's basic information
 * @name: name of he dog
 * @age: ageof the dog
 * @owner: owner of the dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
#include <stdlib.h>

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/*typedef for struct dog */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif /* DOG_H */
