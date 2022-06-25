#include<stdio.h>
#include<stdlib.h>
/**
 *main - a program multiplies two number
 *@argc: size of argument
 *@argv: value of argument
 *Return: 0 if the multiplication is succesfful 1 otherwise
 */
int main(int argc, char *argv[])
{
	int mult;
	int x, y;

	if (argv[1] && argv[2])
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);

		printf("%d\n", x * y);
		return (0);
	}
	else
	{
		printf("Error\n");
	return (1);
	}

}
