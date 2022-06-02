#include <stdio.h>

/**
 * main- the size differnet data type
 * Return: 0 if the program runs successfully
 */

int main(void)
{
	printf("char size: %d byte(s)\n", sizeof(char));
	printf("int size: %d byte(s)\n", sizeof(int));
	printf("short size: %d byte(s)\n", sizeof(short));
	printf("float size: %d byte(s)\n", sizeof(float));
	printf("long size: %d byte(s)\n", sizeof(long));
	printf("DOuble size: %d byte(s)\n", sizeof(double));
	printf("long double size: %d byte(s)\n", sizeof(long double));

	return (0);
}
