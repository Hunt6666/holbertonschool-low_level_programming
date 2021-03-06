#include"holberton.h"

/**
 *is_palindrome - checks string to see if palindrome
 *@s: accepted string to check
 *Return: 1 if palindrome 0 if not
 */


int is_palindrome(char *s)
{
	int l = _strlen_recursion(s);

	if (l == 0)
		return (1);
	return (is_pal(l - 1, 0, s));
}


/**
 *is_pal - helps detect palendromes
 *@l: length of string
 *@b: beginning marker
 *@s: string tested
 *Return: 1 if true 0 if false
 */


int is_pal(int l, int b, char *s)
{
	if (s[l] == s[b])
	{
		l--;
		b++;
		return (is_pal(l, b, s));
	}
	if (l <= b)
		return (1);
	return (0);
}

/**
 *_strlen_recursion - returns the length of an input string with recursion
 *@s: accepted string
 *Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (_strlen_recursion(s) + 1);
}
