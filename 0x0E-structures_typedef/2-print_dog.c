/* Project 0x0E: Task 2 */
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog
 */
void print_dog(struct dog *d)
{
	char nil[] = "(nil)";
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: %s\n", nil);
	else
		printf("Name: %s\n", d->name);
	;
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: %s\n", nil);
	else
		printf("Owner: %s\n", d->owner);
}
