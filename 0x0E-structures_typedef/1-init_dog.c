#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialies a struct
 * @d: pointer to struct dog
 * @name: struct member
 * @age: struct membber
 * @owner: struct member
 *
 * Description: The program initializes a variable of type struct dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
