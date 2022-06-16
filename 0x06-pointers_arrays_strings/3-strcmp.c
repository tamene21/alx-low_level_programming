#include "main.h"

/**
 *_strcmp - performs a binary comparision of s1 and s2
 *@s1: string 1
 *@s2: string 2
 *Return: The difference in binary between the two strings
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);

}
