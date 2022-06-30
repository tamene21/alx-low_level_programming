#include "main.h"
#include<stdlib.h>

/**
 * malloc_checked - a function to allocate memory using malloc
 * @b: Intiger for number of elements
 * Return:A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(b);

	if (s == NULL)
		exite(98);

	free(s);

}
