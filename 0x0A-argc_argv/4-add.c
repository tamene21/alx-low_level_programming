#include<stdio.h>
#include<stdlib.h>

/**
 *main - a program adds two positive numbers
 *@argc: size of arguments
 *@argv: vector of argumnts
 *Return: 0 for not passed & 1 not int
 */
int main(int argc, char *argv[])
{
	int sum;
	int x;
	int y;

	if (argv[1] && argv[2])
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		sum = x + y;

		printf("%d\n", sum);
	}
	else if ((argv[1] && argv[2]) == NULL)
		return ("0\n"); 
	else if ((argv[1] && argv[2]) != int)
		printf("Error\n");
	return (1);
}

