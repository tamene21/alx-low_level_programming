#include "main.h"
/**
 * _strlen_recursion -prints astrings length
 * @s: string argument
 * Return: string length
 */
int _strlen_recursion(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
	return (i);
return (0);
}
