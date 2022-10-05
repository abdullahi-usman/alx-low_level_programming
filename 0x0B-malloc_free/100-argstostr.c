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
	char *args;

	if (ac == 0 || av == NULL)
		return (NULL);

	args = (char *)malloc(ac * sizeof(char));
	if (args == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		args = (char *)realloc(args, strlen(args) * sizeof(char));

		if (args == NULL)
			return (NULL);

		strcat(args, av[i]);
		strcat(args, "\n");
	}

	return (args);
}
