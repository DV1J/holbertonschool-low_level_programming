#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>

/**
 *struct dog - what the dog doin
 *@name: pointer that points to string for name
 *@age: int of age
 *@owner: pointer where string for owner is located
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
