#include "dog.h"
/**
 *free_dog - who let the dogs out!
 *@d: d
 */
void free_dog(dog_t *d)
{
	if (d == 0)
	{
		return;
	}
	if (d->name != 0)
	{
		free(d->name);
	}
	if (d->owner != 0)
	{
		free(d->owner);
	}
	free(d);
}
