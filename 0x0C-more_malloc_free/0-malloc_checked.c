#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * malloc_checked - a function to allocate memory using malloc
 * @b: Intiger for number of elements
 * Return:A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *s = malloc(b);

	if (s == NULL)
		exit(98);

	return(s);

}
