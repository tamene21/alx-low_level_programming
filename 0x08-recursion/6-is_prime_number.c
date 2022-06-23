#include "main.h"
/**
 * is_prime_number - return wether a given number is a prime numer or not
 * @n: is a give number
 * Return: 1 if n is prime or 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
	return (0);
return (real_prime(n, n - 1));

}

/**
 * real_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int real_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (real_prime(n, i - 1));
}
