#include"holberton.h"

/**
 *rot13- encodes a string into rot13 encryption time
 *@str: accepted string pointer to be encoded
 *Return: str encrypted string
 */

char *rot13(char *str)
{
	int i, j;
char s[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMabcdefghijklmnopqrstuvwxyzabcdefghijklm"
;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (j = 0 ; s[j] != '\0' ; j++)
		{
			if (str[i] == s[j])
			{
				str[i] = s[(j + 13)];
				break;
			}
		}
	}
	return (str);
}
