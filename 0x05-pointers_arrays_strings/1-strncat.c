#include"holberton.h"

/**
 **_strncat - this function appends one string to the end of another
 *            it then returns that string but only n chars
 *@dest: this is the string to be appended to
 *@src: This is the string to append
 *@n: ammount of chars to append out of src
 *Return: dest string with src appended to
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, a;

	for (i = 0 ; dest[i] != '\0' ; i++)
		;
	for (j = 0 ; src[j] != '\0' ; j++)
		;
	if (n > j)
		n = j;
	for (a = 0 ; a <= i + n - 1 ; a++)
	{
		if (a > (i - 1) && src[a - i] != '\0')
			dest[a] = src[a - i];
	}
	return (dest);
}
