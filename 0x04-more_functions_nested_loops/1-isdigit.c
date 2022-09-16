
/**
 * _isdigit - check ch is digit.
 * @c: The character
 * Return: Always status.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
