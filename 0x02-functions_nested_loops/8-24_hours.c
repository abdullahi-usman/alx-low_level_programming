#include <stdio.h>

/**
 * jack_bauer - jack_bauer
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			printf("%.2d:%.2d\n", i, j);
		}
	}
}
