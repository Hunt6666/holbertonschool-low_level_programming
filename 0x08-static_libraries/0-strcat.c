#include"holberton.h"

/**
 **_strcat - this function appends one string to the end of another
 *           it then returns that string
 *@dest: this is the string to be appended to
 *@src: This is the string to append
 *Return: dest string with src appended to
 */

char *_strcat(char *dest, char *src)
{
	int i, j, n;

	for (i = 0 ; dest[i] != '\0' ; i++)
		;
	for (j = 0 ; src[j] != '\0' ; j++)
		;
	for (n = 0 ; n <= (i + j) - 1 ; n++)
	{
		if (n > (i - 1))
			dest[n] = src[n - i];
	}
	return (dest);
}
