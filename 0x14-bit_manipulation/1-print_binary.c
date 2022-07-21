#include "main.h"

/**
 *print_binary - prints the binary equivalent of a number
 *@n: a number to print in binary
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int num;

	for (i = 10; i >= 0; i--)
	{
		num = n >> i;

		if (num & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}

	if (!num)
		_putchar('0');

}
