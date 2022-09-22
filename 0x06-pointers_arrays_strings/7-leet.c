#include <string.h>

/**
 * leet - convert to code
 * @str: the string
 *
 * Return: the new converted string
 */

char *leet(char *str)
{
	int i, j;
	char *ch = "aeotlAEOTL";
	char *encode = "4307143071";

	for (i = 0; i < (int)strlen(ch); i++)
	{
		for (j = 0; j < (int)strlen(str); j++)
		{
			if (ch[i] == str[j])
			{
				str[j] = encode[i];
			}
		}
	}

	return (str);
}
