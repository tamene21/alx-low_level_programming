#include<stdio>
#include "main.h"
/**
 * _isdigit -checks for a digit 0 to 9
 * @c: to be checked
 * Return: 1 success, 0 otherwise
 */

int _isdigit(int c)
{
return(c >= '0' && c <= '9');
}
