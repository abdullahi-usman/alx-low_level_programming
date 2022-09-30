
/**
 * is_prime_number - return 1 if prime else 0
 * @n: the number
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if ((n % 2) != 0)
		return (1);

	return (is_prime_number(n - 2));
}
