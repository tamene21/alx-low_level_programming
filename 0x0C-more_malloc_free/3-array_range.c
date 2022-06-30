#include "main.h"
#include<stdlib.h>
/**
 * array_range - a function to create array of ingegers
 * @min: minimum range of an integer
 * @max: maximum range of an integer
 * Return: a pointer to the allocated memory for the array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
