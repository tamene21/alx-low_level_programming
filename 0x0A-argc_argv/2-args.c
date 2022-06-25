#include<stdio.h>
/**
 *main - program name
 *@argc: argument size
 *@argv: argument value
 *Return: always 0 for success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)

		printf("%s\n", argv[i]);

	return (0);
}
