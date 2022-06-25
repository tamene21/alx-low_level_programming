#include<stdio.h>
/**
 *main - program name
 *@argc: argument count
 *@argv: argument vector
 *Return: Always 0 for success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		argv[i] = argv[i];
	}
	printf("%d\n", argc - 1);

	return (0);
}
