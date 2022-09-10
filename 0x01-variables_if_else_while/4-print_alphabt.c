#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		if (n == 65 || n == 71)
			continue;

		putchar(n);
	}
	putchar('\n');

	return (0);
}
