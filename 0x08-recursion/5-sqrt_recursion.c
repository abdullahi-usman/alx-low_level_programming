#include <math.h>
/**
 * _sqrt_recursion - sqrt the number
 * @n: the number
 *
 * Return: the sqrt
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);

	return (_sqrt_recursion(n / 2) + _sqrt_recursion(n / 4));
}
