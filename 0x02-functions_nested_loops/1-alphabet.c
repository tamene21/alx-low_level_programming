#include <stdio.h>
/**
 * main -print_alphabet - prints the alphabet, in lowercase, followed by a new line
 * REturn: Always 0 (success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar ("%c", ch);
		ch++;
	}
	putchar("\n");
	return (0);
}
