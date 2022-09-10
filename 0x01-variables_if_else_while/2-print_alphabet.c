#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, nn;

	for (n = 97; n <= 123; n++)
	{
		nn = n;
		if (n == 123)
			nn = 40;

		putchar(n);
	}

	return (0);
}
