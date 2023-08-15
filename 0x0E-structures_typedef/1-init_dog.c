#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes the variable of the dog's structure
 * @d: pointer to struct dog to ini
 * @name: Name to initialize
 * @age: Age to initialize
 * @owner: Owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
