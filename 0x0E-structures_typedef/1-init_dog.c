#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - struct dog variable
 *@d: struct dog
 *@name:name of the dog
 *@age:age of the dog
 *@owner: owners name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NUL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;

	}

}
