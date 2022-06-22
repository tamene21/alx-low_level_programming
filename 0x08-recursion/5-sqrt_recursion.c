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
	return (_squaroot(n, 0));
}
/**
 *_squaroot  - function to solve sqrt_recursion
 * @x: number to determine if squarerrot
 * @i: Incrementer to compare against c
 * Return: square root if natural or -1 i none found
 */
int _squaroot(int x, int i)
{
	if (i * i > x)
		return (-1);
	if (i * i == x)
		return (i);
	return (_squaroot(x, i + 1));
}


