#include "main.h"
#include<stdlib.h>

/**
 * str_concat - a function to concatinate two string on the available space
 * @s1: string one
 * @s2: string two
 * Return: pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int a, b;

	int i = sizeof(s1);
	int c = sizeof(s2);
	int sum = i + c;

	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s = (char *)malloc(sum * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (a = 0; a < i; a++)
		s[a] = s1[a];

	for (b = 0; b < sum; b++)
		s[i + 1] = s2[c];

	return (s);

}
