#include "variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>

/**
 * print_strings - prints a string
 * @separator: a separator between strings
 * @n: Number of arguments
 * Return: string list
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list str;

	va_start(str, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		s = va_arg(str, char *);

		if (s == NULL)
			s = ("nil");
		printf("%s", s);

		if (i < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(str);

}
