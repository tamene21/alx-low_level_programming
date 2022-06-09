#include "main.h"

/**
 * _isupper - checks if the character is upper case or not.
 *@c: to be tested character
 * Return: 1 if it is upper case, 0 otherwise
 */
int _isupper(c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
