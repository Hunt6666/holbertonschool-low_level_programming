#include<stdio.h>
#include"holberton.h"

/**
 *print_array- prints a number of elaments in an array and newline
 *@a: pointer to array
 *@n: number of elaments to be printed
 *Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
