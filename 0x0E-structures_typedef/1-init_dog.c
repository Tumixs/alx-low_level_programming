/* Project 0x0E - Task 1*/
#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to variable (varaible of type struct dog)
 * @name: memeber 1
 * @age: member 2
 * @owner: member 3
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
