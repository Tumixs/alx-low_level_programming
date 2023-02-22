/* Project 0x0E: Task 5 */
#include "dog.h"
/**
 * free_dog - frees the memory allocated to dog
 * @d: pointer to struct dog
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
