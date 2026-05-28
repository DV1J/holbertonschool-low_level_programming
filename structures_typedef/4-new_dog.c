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
	int nam_len = 0, own_len = 0;

	newdog = malloc(sizeof(dog_t));
	if (newdog == 0)
		return (0);

	while (name[nam_len] != '\0')
	{
		nam_len++;
	}
	newdog->name = malloc((nam_len + 1) * (sizeof(dog_t)));
	if (newdog->name == 0)
	{
		free(newdog->name);
		return (0);
	}

	while (owner[own_len] != '\0')
	{
		own_len++;
	}
	newdog->owner = malloc((own_len + 1) * (sizeof(dog_t)));
	if (newdog->owner == 0)
	{
		free(newdog->owner);
		return (0);
	}

	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;
	return (newdog);

	return (0);
}
