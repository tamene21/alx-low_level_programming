#include "main.h"

/**
 *_strcat - concatinating char *dest, char *src
 *
 *@dest:This is the output dataset
 *@src:This is the source dataset
 *
 *Return: dest file
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; j++)

	{
		dest[i] = src[j];
		i++;
	}

	return (dest);

}

