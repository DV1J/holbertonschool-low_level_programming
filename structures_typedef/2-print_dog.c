#include "dog.h"
/**
 *print_dog - function that prints a struct dog
 *@d: arry
 */
void print_dog(struct dog *d)
{
	if (d == 0)
	{
		return;
	}
	if (d->name == 0)
	{
		printf("Name: (nil)\n");
	}
	if (d->age == 0)
	{
		printf("Age: (nil)\n");

	}
	if (d->owner == 0)
	{
		printf("Owner: (nil)\n");
	}

}

