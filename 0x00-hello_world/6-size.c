#include <stdio.h>

/**
 * main- the size differnet data type
 * Return: 0 if the program runs successfully
 */

int main(void)
{
	printf("char size: %lu bytes \n", sizeof(char));
	printf("int size: %lu bytes \n", sizeof(int));
	printf("short size: %lu bytes \n", sizeof(short));
	printf("float size: %lu bytes \n", sizeof(float));
	printf("long size: %lu bytes \n", sizeof(long));
	printf("DOuble size: %lu bytes \n", sizeof(double));
	printf("long double size: %lu bytes \n", sizeof(long double));

	return (0);
}
