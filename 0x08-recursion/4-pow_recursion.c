#include "main.h"
/**
 * _pow_recursion - return the value of x raised to the power of y
 * @x: a value
 * @y: power value
 * Return: -1 if y is less than 0 or otherwise
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
