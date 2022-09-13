/**
 * _islower - _islower
 * @c: the character
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
    if ((c < 65 || c > 122) || (c > 90 && c < 97))
        return (0);

    return (1);
}