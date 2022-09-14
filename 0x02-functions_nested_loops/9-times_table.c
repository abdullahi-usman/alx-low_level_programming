#include <stdio.h>
#include "putchar.h"
/**
 * times_table - times_table
 *
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			printf("%*fd", 2.5, i * j);

			if (j != 9)
				printf(",");
		}

		printf("\n");
	}
}
