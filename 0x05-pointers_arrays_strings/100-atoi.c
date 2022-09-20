#include <stdlib.h>
#include <string.h>

/**
 * _atoi - return numbers
 * @s: the string of numbers
 *
 * Return: the number;
 */
int _atoi(char *s)
{
	int s_length = strlen(s);
	char *ret = malloc(sizeof(char) * s_length);
	int i, j = 0;

	if (s_length == 0)
		return 0;

	for (i = 0; i < s_length; i++)
	{
		if ((s[i] < 48 || s[i] > 59))
		{
			continue;
		}

		if (s[i - 1] == '-')
			ret[j++] = '-';
		else if (s[i - 1] == '+')
			ret[j++] = '+';

		ret[j++] = s[i];
	}

	j = atoi(ret);

	return (j);
}
