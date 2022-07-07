<<<<<<< HEAD
#include "variadic_functions.h"
#include<stdarg.h>
=======
#include<stdarg.h>
#include<stdio.h>
#include "variadic_functions.h"
>>>>>>> e7a4336ab840141d72b3dc623ef2547edecc76e6

/**
 *sum_them_all - suming the number of argumnets
 *@n: a counter for argumnets
 *Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list ap;
	unsigned int i;
	int sum = 0;

<<<<<<< HEAD
	va_start(ap, n);

=======
>>>>>>> e7a4336ab840141d72b3dc623ef2547edecc76e6
	if (n == 0)
		return (0);
	va_start(ap, n);

	for (i = 0; i < n; i++)
<<<<<<< HEAD

		sum += va_arg(ap, int);


	va_end(ap);

	return (sum);


=======
		sum += va_arg(ap, int);
				
	va_end(ap);
	
	return (sum);
>>>>>>> e7a4336ab840141d72b3dc623ef2547edecc76e6
}
