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
	int i, length = (int)strlen(str);

	for (i = 0; i < length; i++)
	{
		int ch = toupper(str[i]);

		if (ch >= 65 && ch <= 77)
		{
			str[i] = (char)((int)ch + 13);
		}
		else if (ch > 77 && ch <= 90)
		{
			str[i] = (char)(int)(str[i] - 13);
		}
	}

	return (str);
}
