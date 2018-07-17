#include "holberton.h"
#include <stdlib.h>


/**
 *argstostr - concatenates all the arguments of the program
 *@ac: number of arguments
 *@av: pointer to pointer of argument array
 *Return: the concated string
 */

char *argstostr(int ac, char **av)
{
	char *out;
	int i, j, size, k;

	size = 0;
	k = 0;
	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] != '\0' ; j++)
		{
			size = size + 1;
		}
		size = size + 1;
	}
	out = (char *)malloc(size * sizeof(char) + 1);
	if (out == NULL)
		return (NULL);
	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] != '\0' ; j++)
		{
			out[k] = av[i][j];
			k++;
		}
		out[k] = '\n';
		k++;
	}
	out[k] = '\0';
	return (out);
}
