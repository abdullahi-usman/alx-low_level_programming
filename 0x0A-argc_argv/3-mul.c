#include <stdio.h>
#include <stdlib.h>

/**
 * main - the program entry point
 * @argc: number of argumetns
 * @argv: the array oc arguments
 *
 * Return: Vois
 */

int main(int argc, char **argv)
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) + atoi(argv[2]));

	return (0);
}
