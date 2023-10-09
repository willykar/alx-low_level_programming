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
dog_t *new_dog(char *name, float age, char *owner);

/*typedef for struct dog */
typedef struct dog dog_t;
/* Function to free memory allocated for a dog */
void free_dog(dog_t *d);
#endif /* DOG_H */
