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
	int nam_len = 0, own_len = 0, i;

	if (name == 0 || owner == 0)
	{
		return(0);
	}
	newdog = malloc(sizeof(dog_t));
	if (newdog == 0)
		return (0);

	while (name[nam_len] != '\0')
	{
		nam_len++;
	}
	newdog->name = malloc((nam_len + 1) * sizeof(char));
	if (newdog->name == 0)
	{
		free(newdog);
		return (0);
	}

	for (i = 0; i < nam_len; i++)
		newdog->name[i] = name[i];
	newdog->name[i] = '\0';
	while (owner[own_len] != '\0')
	{
		own_len++;
	}
	newdog->owner = malloc((own_len + 1) * sizeof(char));
	if (newdog->owner == 0)
	{
		free(newdog->name);
		free(newdog);
		return (0);
	}
	for (i = 0; i < own_len; i++)
		newdog->owner[i] = owner[i];
	newdog->owner[i] = '\0';
	newdog->age = age;
	return (newdog);
}
