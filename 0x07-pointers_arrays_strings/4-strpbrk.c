#include "main.h"
/**
 * *_strpbrk - searched a string for any of a set of bytes
 * @s: string
 * @accept: string to match
 * Return: pointer to thebyte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
