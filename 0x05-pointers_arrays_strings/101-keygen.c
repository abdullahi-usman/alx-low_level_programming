#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - the entry point
 *
 * Return: int
 */
int main()
{

	srand(time(NULL));
	printf("%d\n", rand());

	return (0);
}
