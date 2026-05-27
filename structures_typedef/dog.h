#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>

/**
 *struct dog - what the dog doin
 *@name: pointer that points to string for name
 *@age: int of age
 *@owner: pointer where string for owner is located
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);

#endif
