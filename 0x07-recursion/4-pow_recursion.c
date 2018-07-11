#include"holberton.h"

/**
 *_pow_recursion - returns value of x raised to the y power
 *@x: base input int
 *@y: to the power of this number
 *Return: x to the power of y
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	y--;
	return (x * _pow_recursion(x, y));
}
