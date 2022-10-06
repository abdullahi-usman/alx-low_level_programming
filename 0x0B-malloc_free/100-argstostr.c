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
	int i, char_size = 0;
	char *args;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		char_size += (int)strlen(av[i]);
	}

	args = (char *)malloc((ac + char_size) * sizeof(char));
	if (args == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		strcat(args, av[i]);
		strcat(args, "\n");
	}

	return (args);
}
