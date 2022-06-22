#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: is a given number
 * Return: -1 for n lower than 0 and 1 for n is 0 and otherwise
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (factorial(n - 1) + factorial(n - 2));

}
