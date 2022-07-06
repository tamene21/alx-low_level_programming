#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *int_index - returns the index of the first element
 *@array: a pointer to the array
 *@size: number of element in the array
 *@cmp: a pointer to the function
 *Return: -1 for failure
 */



int int_index(int *array, int size, int (*cmp)(int))
{

	int i;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (0);
	}

	return (-1);
}
