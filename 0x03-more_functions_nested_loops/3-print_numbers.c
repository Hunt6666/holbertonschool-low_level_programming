#include "holberton.h"
/**
 *print_numbers - accepts void
 *                prints numbers
 *                0 to 9
 *
 *
 *Return: nothing
 */

void print_numbers(void)
{
	int i;

	i = '0';
	while (1)
	{
		if (i > '9')
			break;
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
