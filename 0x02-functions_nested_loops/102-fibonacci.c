# include "holberton.h"
#include <stdio.h>
/**
 * main- prints all fibanaccie nums
 *       starting with the second 1
 *
 * Return: alwayse 0
 *
 * does-
 */

int main(void)
{
	long int a, b, c, k;

	a = 0;
	b = 1;
	c = 0;
	for (k = 0 ; k <= 49 ; k++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%ld", c);
		if (k != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
