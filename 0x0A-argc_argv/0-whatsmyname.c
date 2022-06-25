#include "main.h"
#include <stdio.h>
/**
 *main - prints the name of the program
 *@argc: number of arguments
 *@argv: vector of argument
 *
 *Return: Always 0 (success)
 */

int main(int argc, char **argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", *argv[0]);
	}
	return (0);
}
