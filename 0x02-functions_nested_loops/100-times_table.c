# include "holberton.h"

/**
 * print_times_table - accepts int
 *                     prints multiplication table to the int
 *                     followed by new line
 * Return: alwayse 0
 *
 */



void print_times_table(int n)
{
	int i;
	int j;
	int q;
	int a;
	int b;
	int c;

	for (i = 0 ; i <= n ; i++)
	{
		for (j = 0 ; j <= n ; j++)
		{
			q = (i * j);
			a = ('0' + (q / 100));
			b = ('0' + (q % 10));
			c = ('0' + ((q % 100) % 10));
			if (a > '0')
				_putchar(a);
			else if (j != 0)
				_putchar(' ');
			if (c > '0')
				_putchar(c);
			else if (j != 0)
				_putchar(' ');
			_putchar(b);
			if (j == n)
				break;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
