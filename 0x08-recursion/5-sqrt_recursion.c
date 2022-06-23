#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root
 * @n: a given number
 * Return: a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (new_squaroot(n, 0));
}
/**
 *new_squaroot  - function to solve sqrt_recursion
 * @n: number to determine if squarerrot
 * @i: Incrementer to compare against n
 * Return: square root if natural or -1 i none found
 */
int new_squaroot(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (new_squaroot(n, i + 1));
}


