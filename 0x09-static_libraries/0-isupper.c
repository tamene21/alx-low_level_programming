#include<stdio.h>
#include "main.h"

/**
 * _isupper - checks if the character is upper case or not.
 *@c: to be tested character
 * Return: 1 if it is upper case, 0 otherwise
 */

int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
