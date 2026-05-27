#include "dog.h"
/**
 *new_dog - HOW MANY DOGS ARE THERE!?
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *Return: NULL || newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	if (newdog == 0)
	{
		free(newdog);
		return (0);
	}
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;
	return (newdog);
}
