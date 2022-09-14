#include <stdio.h>

/**
 * jack_bauer - jack_bauer
 * @n: the number
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 60; i++)
	{
		for (j = 0; j < 60; j++)
		{
			printf("%d:%d", i, j);
		}
	}
}
