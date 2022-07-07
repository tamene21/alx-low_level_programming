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
	for (i = 0; i <= n; i = va_arg(ap, int))
		if (separator == NULL)

			printf("%d", i);

	printf("\n");

	va_end(ap);
}
