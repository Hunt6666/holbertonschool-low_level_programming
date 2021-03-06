#include "holberton.h"


/**
 *binary_to_uint- converts a binary nuber to an unsigned int
 *@b: string of 0's and 1's to be coverted
 *Return: 0 if b is null or there is a number that is not 0 or 1
 *        or the converted number
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int mul;
	unsigned int ans = 0;

	if (b == NULL)
		return (ans);
/*checks to see if b has anything*/
	if (b[0] == '\0')
		return (0);

/*itterating to end of string*/
	for (i = 0 ; b[i] != '\0' ; i++)
		if (b[i] != '0' && b[i] != '1')
			return (0);
	i--;
/*conversion*/
	for (mul = 1 ; i >= 1 ; i--, mul = mul * 2)
		ans += (b[i] - '0') * mul;
	ans += (b[i] - '0') * mul;

	return (ans);
}
