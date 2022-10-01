#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>
#include <ctype.h>

/**
 * test - tmake test
 * @amount: number of argumetns
 *
 *
 * Return: Vois
 */

int test(int amount)
{
	int coins = 0;

	while (amount > 0)
	{
		if (amount >= 25)
		{
			amount -= 25;
			coins++;
			continue;
		}

		if (amount >= 10)
		{
			amount -= 10;
			coins++;
			continue;
		}

		if (amount >= 5)
		{
			amount -= 5;
			coins++;
			continue;
		}

		if (amount >= 2)
		{
			amount -= 2;
			coins++;
			continue;
		}

		if (amount >= 1)
		{
			amount -= 1;
			coins++;
			continue;
		}
	}
	return (coins);
}

/**
 * main - the program entry point
 * @argc: number of argumetns
 * @argv: the array oc arguments
 *
 * Return: Vois
 */
int main(int argc, char **argv)
{
	int amount = 0, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (argc < 0)
	{
		printf("%d\n", 0);
	}

	amount = atoi(argv[1]);
	coins = test(amount);

	printf("%d\n", coins);

	return (0);
}
