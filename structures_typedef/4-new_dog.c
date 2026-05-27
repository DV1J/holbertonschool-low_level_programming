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
 dog_t *newdog2;

	newdog = malloc(sizeof(dog_t));
	if (newdog == 0)
	{
		return (0);
 free(newdog);
	}
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;
newdog2->name = newdog->name;
newdog2->owner = newdog->owner;
free(newdog);
	return (newdog);

}
