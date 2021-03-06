#include "holberton.h"
#include<stdlib.h>


/**
 *array_range - creates an array of ints
 *@min: starts at
 *@max: ends at
 *Return: pointer to array of ints
 */


int *array_range(int min, int max)
{
	int size;
	int *out;

	if (min > max)
		return (NULL);
	size = max - min;

	out = (int *)malloc(sizeof(int) * (size + 1));
	if (out == NULL)
		return (NULL);
	for (max = 0 ; max <= size ; max++)
	{
		out[max] = min + max;
	}

	return (out);
}
