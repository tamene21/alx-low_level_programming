#include "main.h"
/**
 * *_memcpy - copys n bytes from memory area to dest
 * @dest: A memory area to be replaced
 * @src: A menmory area to be compied
 * @n: a number of bytes
 * Return: Returning a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
