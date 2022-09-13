#include <stdio.h>

int print_sign(int n)
{
	if (n < 0)
	{
		puts("-");
		return -1
	}
	else if (n > 0)
	{
		puts("+");
		return 1;
	}
	else
	{
		puts("0");
		return 0;
	}
}
