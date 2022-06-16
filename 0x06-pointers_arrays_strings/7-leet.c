#include "main.h"

/**
 * leet - translates string to 1337
 * @s: pointer to string
 * Return: returns translated s
 */
char *leet(char *s)
{
	int a;
	int b;

	char lower[] = "aeotl";
	char upper[] = "AEOTL";
	char numbers[] = "43071";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; lower[b] != '\0' && upper[b] != '\0'; b++)
		{
			if (s[a] == lower[b] || s[a] == upper[b])
			{
				s[a] = numbers[b];
				break;
			}
		}
	}
	return (s);
}
