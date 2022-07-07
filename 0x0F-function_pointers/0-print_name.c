#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - print name as is
 * @name: name of the person
 * @f: a pointer to a print function
 * Return: void
 */

void print_name(char * name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
