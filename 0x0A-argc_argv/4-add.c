#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>

/**
 * main - the program entry point
 * @argc: number of argumetns
 * @argv: the array oc arguments
 *
 * Return: Vois
 */

int main(int argc, char **argv)
{
	int i, sum = 0;
	long cal;
	char *endptr;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		errno = 0;
		cal = strtol(argv[i], &endptr, 10);

		if (cal == 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += cal;
	}

	printf("%d\n", sum);

	return (0);
}
