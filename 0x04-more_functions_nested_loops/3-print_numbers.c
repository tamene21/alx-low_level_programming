#include<stdio.h>
#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9 followed by new line
 *
 * Return: sucess 0, 1 otherwise
 */

void print_numbers(void)
{

int i;

for (i = 0; i < 10; i++)
{
	_putchar(i);
}
	_putchar('\n');

}
