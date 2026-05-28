#include "dog.h"
/**
 *free_dog - who let the dogs out!
 *@d: d
 */
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d);
	}
}
