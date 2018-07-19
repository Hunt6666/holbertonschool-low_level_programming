#include"holberton.h"
#include<stdlib.h>
#include<stdio.h>


/**
 *malloc_checked - allocates b bytes of memory using malloc
 *@b: the number of bytes to allocate
 *Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *out;

	out = malloc(b);
	if (out == NULL)
		exit(98);
	return (out);
}
