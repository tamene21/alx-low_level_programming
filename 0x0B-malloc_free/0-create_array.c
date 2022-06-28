#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: of elements
 * @c: characters
 * Return: an array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *s;

	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)

		return (NULL);

	for (a = 0; a < size; a++)
	{
		s[a] = c;
	}
	return (s);

}
