#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *array_iterator - Executes a function as a given argument
 *@array: a pointer to the array
 *@size: size of the array
 *@action: a pointer to the function
 *Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
