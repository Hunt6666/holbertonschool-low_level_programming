#include"holberton.h"


/**
 *flip_bits- returns the number of bits needed to be changed
 *           in order to switch one number to another
 *@n: the number to be changed
 *@m: compairing number
 *Return: number of diffrences in bits
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ch;
	unsigned int ans = 0;

	ch = n ^ m;

	while (ch > 0)
	{
		if ((ch & 1) == 1)
			ans++;
		ch = ch >> 1;
	}

	return (ans);
}
