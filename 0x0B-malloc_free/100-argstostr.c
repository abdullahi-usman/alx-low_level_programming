#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concat args
 * @ac: the number of arg
 * @av: the args
 *
 * Return: the array
 */
char *argstostr(int ac, char **av)
{
	int i;

	if (ac == 0 || av == NULL)
		return (NULL);

	char *args = (char *)malloc(ac);

	for (i = 0; i < ac; i++)
	{
		args = (char *)realloc(args, ac + strlen(args));
		strcat(args, av[i]);
		strcat(args, "\n");
	}

	return (args);
}
