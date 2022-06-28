#include "main.h"
#include<stdlib.h>
/**
 *argstostr - a function to concatinate all arguments
 *@ac: counting the number of arguments
 *@av: argumment value
 *Return: a pointer to a new string
 */
char *argstostr(int ac, char **av)
{

	int i;
	size_t len = 0;
	char *all_args, *_all_args;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}
	all_args = _all_args = (char *)malloc(len + ac - 1);

	for (i = 1; i < argc; i++)
	{
		memcpy(_all_args, av[i], strlen(av[i]));
		_all_args += strlen(av[i]) + 1;
		*(_all_args - 1) = ' ';
	}
	*(_all_args - 1) = 0;

	free(all_args);

	return (0);
}
