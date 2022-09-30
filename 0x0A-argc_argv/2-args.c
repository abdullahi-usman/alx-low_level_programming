#include <stdio.h>

/**
 * main - the program entry point
 * @argc: number of argumetns
 * @argv: the array oc arguments
 *
 * Return: Vois
 */

int main(int argc, char **argv)
{

	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
