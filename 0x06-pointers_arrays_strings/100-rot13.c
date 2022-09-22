#include <string.h>
#include <ctype.h>

/**
 * rot13 - encrypt
 * @str: the string to encrypt
 *
 * Return: the str
 */

char *rot13(char *str)
{
	int i, j;
	char *alpha = "abcdefghijklmnopqrstuvwxyz";
	char *alpha_r = "nopqrstuvwxyzabcdefghijklm";

	for (i = 0; i < (int)strlen(str); i++)
	{
		for (j = 0; j < (int)strlen(alpha); j++)
		{
			if (alpha[j] == str[i])
			{
				str[i] = alpha_r[j];
				break;
			}
		}
	}

	return (str);
}
