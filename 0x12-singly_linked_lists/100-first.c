
#include <stdio.h>

void myConstructor(void) __attribute__((constructor));

/**
 * myConstructor - COnstructor
 * Return: VOid
 */

void myConstructor(void)
{
	const char *str_half = "You're beat! and yet, you must allow,\n";
	const char *str_second_half = "I bore my house upon my back!\n";

	printf("%s%s", str_half, str_second_half);
}
