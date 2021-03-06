#include"variadic_functions.h"
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

/**
 *print_numbers - prints all input numbers folled by \n
 *@separator: string to be printed in between numbers
 *@n: the number of arguments
 *Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;


	va_start(list, n);

	if (separator != NULL)
	{
		for (i = 0 ; i < n ; i++)
		{
			printf("%d", va_arg(list, int));
			if (i == n - 1)
				break;
			printf("%s", separator);
		}
	}
	else
	{
		for (i = 0 ; i < n ; i++)
		{
			printf("%d", va_arg(list, int));
		}
	}
	printf("\n");

	va_end(list);
}
