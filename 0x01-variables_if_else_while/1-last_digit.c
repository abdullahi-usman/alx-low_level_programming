#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, digit;
	char buf[256];

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	sprintf(buf, "%d", n);
	sprintf(buf, "%c", buf[strlen(buf) - 1]);
	digit = atoi(buf);

	if (n < 0)
		digit = ~digit + 1;

	if (digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	else if (digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, digit);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
	/* your code goes there */
	return (0);
}
