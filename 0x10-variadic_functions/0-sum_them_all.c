#include<stdarg.h>
#include<stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - suming the number of argumnets
 * @n: a counter for argumnets
 * Return: sum otherwise 0 for n is 0
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list ap;
	int i, sum;

	va_start(ap, n);

	sum = 0;

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, n);
		va_end(ap);
		return (sum);
	}


}
