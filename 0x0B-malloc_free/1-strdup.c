#include "main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 *_strdup - a function that retruns a pointer with a duplicated string
 *@str: a string to be checked for its duplication
 *Return: a pointer of repeated string
 */

char *_strdup(char *str)
{
	int i, c;
	char *s;

	if (str == NULL)
	{
		return (NUll);
	}

	for (a = 0; str[a] != '\0'; a++)
		;
	s = (char *)malloc(a + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);


	for (b = 0; b < a; b++)
		s[b] = str[b];

	s[a] = '\0';
	return (s);

}
