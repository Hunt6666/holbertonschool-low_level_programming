#include "holberton.h"
/**
 *_isdigit - accepts an int
 *           and checks it to see
 *           if digit
 *@c: accepted int
 *
 *Return: 1 if digit 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
