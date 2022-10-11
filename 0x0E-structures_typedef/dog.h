#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct name
 * @name: dog name
 * @age: dog's age
 * @owner: dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#include <stdio.h>
#include <stdlib.h>
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif
