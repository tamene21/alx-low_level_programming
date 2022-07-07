i#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_numbers - returns the index of the first element
 *@separator: a pointer to the array
 *@n: number of element in the array
 *Return: list of numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(ap, int));
		else if (separator && i == 0)
			printf("%d", va_arg(pt, int));
		else
			printf("%s%d", separator, va_arg(ap, int));

	}

	printf("\n");

	va_end(ap);
}
