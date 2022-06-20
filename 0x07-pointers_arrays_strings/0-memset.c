#include "main.h"

/**
 * *_memset - fill a memory with a constant byte
 *@s:pointer variable to the value
 *@b:value to be filled in the memory
 *@n:size of the value
 *
 * Return: point to the memory area s
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);

}
