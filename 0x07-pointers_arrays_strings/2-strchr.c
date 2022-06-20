#include "main.h"
#include<stdio.h>
/**
 * *_strchr - locates a characater in string
 * @s: pointer to a string
 * @c: character to be found
 * Return: pointer to first occurence of c
 */
char *_strchr(char *s, char c)
{
	size_t i;
	char *temp;

	while (*s[i])
	{
		if (s[i] == c)
		{
			temp = &s[i];
			return (temp);
		}
		i++;
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}

	return (NULL);
}
