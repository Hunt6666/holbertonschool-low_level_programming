#include"holberton.h"

/**
 *cap_string- captializes all words in a string
 *@str: accepted string pointer
 *Return: str capitalized
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i - 1] == ' ' || str[i - 1] == '\n' || str[i - 1] == '.'
			|| str[i - 1] == '\t' || str[i - 1] == ',' || str[i - 1]
			== ';' || str[i - 1] == '!' || str[i - 1] == '?' ||
			str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] ==
			')' || str[i - 1] == '{' || str[i - 1] == '}')

			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = (str[i] - 'a') + 'A';
		if (str[i - 2] == '\t')
			str[i - 2] = ' ';
	}
	return (str);
}
