#include <math.h>

/**
 * _pow_recursion - recursion pow
 * @x: the x value
 * @y: the y value
 *
 * Return: the powed
 */

int _pow_recursion(int x, int y)
{
	if (y <= 0)
		return 1;

	if (y < 0)
		return -1;

	if (y == 1)
		return x;

	return (x * _pow_recursion(x, y - 1));
}
