#include"holberton.h"

/**
 * _strncpy- copies n chars from string src to string dest
 *@dest: the string copy destination
 *@src: the string to copy
 *@n: the amount of chars to be copied
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0 ; a < n && src[a] != '\0' ; a++)
	{
		dest[a] = src[a];
	}
	for ( ; a < n ; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
