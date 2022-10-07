#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

/**
 * print_exit - print the exit
 * Return: Null
 */
void print_exit(void)
{
	puts("Error");
	exit(98);
}

/**
 * main - the entry point
 * @argc: argument number
 * @argv: the argv
 *
 * Return: program status
 */
int main(int argc, char **argv)
{
	char **error_detect = NULL;
	int num1 = 0, num2 = 0;

	if (argc != 3)
	{
		print_exit();
	}

	num1 = strtol(argv[1], error_detect, 10);

	if ((error_detect != NULL && **error_detect == '\0') || num1 == 0)
	{
		print_exit();
	}
	error_detect = NULL;

	num2 = strtol(argv[2], error_detect, 10);
	if ((error_detect != NULL && **error_detect == '\0') || num2 == 0)
	{
		print_exit();
	}

	printf("%d\n", num1 * num2);

	return (0);
}
