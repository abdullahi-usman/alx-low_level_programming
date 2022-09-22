#include <string.h>
#include <ctype.h>

/**
 * cap_string - capitalize string
 * @str: the string
 *
 * Return: The string
 */

char *cap_string(char *str)
{

	int i;
	int capitalize_next = -1;
	char c;

	for (i = 0; i < (int)strlen(str); i++)
	{
		if (capitalize_next == 0)
		{
			str[i] = toupper(str[i]);
			capitalize_next = -1;
		}

		c = str[i];

		if (c == ',' || c == ';' || c == ' ' || c == '\n' ||
			c == '\t' || c == '.' || c == '!' || c == '?' ||
			c == '"' || c == '(' || c == ')' || c == '{' || c == '"')
		{
			capitalize_next = 0;
		}

		if (c == '\t')
			str[i] = ' ';
	}

	return (str);
}
