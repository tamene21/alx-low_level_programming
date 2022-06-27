#include "main.h"

/**
 *_strncat - concatinating dest on src within n places
 *
 *@dest:This is destination file
 *@src:This is source file
 *@n:No of places for dest file after src
 *
 * Return: Returning dest after concatenating in n places
 */

char *_strncat(char *dest, char *src, int n)
{

	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	if (j < n)
	{
		dest[i] = '\0';
	}
	return (dest);

}
