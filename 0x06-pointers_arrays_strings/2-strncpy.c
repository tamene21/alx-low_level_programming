#include "main.h"

/**
 * _strncpy - copy src file to dest file
 *
 *@n: no of space
 *@dest: A place to be pasted
 *@src: File to be copied
 *Return: a destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];
for (; i < n; i++)
	dest[i] = '\0';

return (dest);

}
