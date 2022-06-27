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
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
