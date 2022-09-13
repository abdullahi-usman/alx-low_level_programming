/**
 * _islower - _islower
 * Paramete c: the character
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c < 97 || c > 122)
		return (0);

	return (1);
}