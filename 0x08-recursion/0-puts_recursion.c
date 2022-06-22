#include "main.h"
/**
 *_puts_recursion - print a string with a new line
 *@s: input argument
 *Return: Always 0 for success
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
