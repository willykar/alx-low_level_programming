#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d - pointer to struct dog
 * @name: name of the dog
 * @age: member age of the dog
 * @owner: (member) owner of the dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
