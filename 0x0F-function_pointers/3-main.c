#include <stdio.h>
#include "function_pointers.h"

int main(int argc, char **argv)
{
	int (*func)(int, int);
	int a, b;

	if (argc != 4)
	{
		puts("Error");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		puts("Error");
		return (99);
	}

	if ((a == 0 || b == 0) && (func == op_div || func == op_mod))
	{
		puts("Error");
		return (100);
	}

	printf("%d\n", func(a, b));

	return (0);
}