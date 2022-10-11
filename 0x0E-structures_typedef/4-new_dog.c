#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: struct member
 * @age: struct member
 * @owner: struct member
 *
 * Description: s
 * Return: returns the created struct
 * else returns NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
		;
	d1->name = malloc(nameLen * sizeof(d1->name));
	if (d1->name == NULL)
	{
		free(d1);
		return (NULL);
	}
	for (i = 0; i <= nameLen; i++)
		d1->name[i] = name[i];
	d1->age = age;
	d1->owner = malloc(ownerLen * sizeof(d1->owner));
	if (d1->owner == NULL)
	{
		free(d1->name);
		free(d1);
		return (NULL);
	}
	for (i = 0; i <= ownerLen; i++)
		d1->owner[i] = owner[i];
	return (d1);
}
