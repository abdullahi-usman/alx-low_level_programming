#include <stdlib.h>
#include <string.h>

/**
 * strtow - put string to words
 * @str: the string
 *
 * Return: the word
 */
char **strtow(char *str)
{
	char **ret_str, *cal_str = str;
	int i, malloc_no_char = 2;

	if (str == NULL || strlen(str) == 0)
		return (NULL);

	while (cal_str != NULL)
	{
		cal_str = index(cal_str, ' ');
		malloc_no_char++;
	}

	ret_str = (char **)malloc(malloc_no_char * sizeof(char *));

	for (i = 0; i < malloc_no_char; i++)
	{
		ret_str[i] = (char *)malloc(sizeof(char));
	}

	ret_str[malloc_no_char] = NULL;

	return (ret_str);
}
