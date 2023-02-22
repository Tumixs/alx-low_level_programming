/* Project 0x0E: task 4 */
#include "dog.h"
/**
 * new_dog - creates a new dog of type struct dog
 * @name: member 1
 * @age: memeber 2
 * @owner: member 3
 *
 * Return: returns a pointer to a struct dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdogptr;

	newdogptr = malloc(sizeof(dog_t));
	if (newdogptr == NULL)
		return (NULL);
	newdogptr->name = name;
	newdogptr->age = age;
	newdogptr->owner = owner;

	return (newdogptr);
}
