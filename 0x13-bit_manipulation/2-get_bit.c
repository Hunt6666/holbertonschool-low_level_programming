#include "holberton.h"


/**
 *get_bit- returns value of a bit at a given index
 *@n: the input number
 *@index: the given index
 *Return: the value of the bit at index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index > sizeof(n) * 8)
		return (-1);

	for (i = 0 ; i < index ; i++)
	{
		if (n >> 1 == 0)
			return (0);
		n = n >> 1;
	}
	return (n & 1);
}
