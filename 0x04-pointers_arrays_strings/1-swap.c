#include"holberton.h"

/**
 *swap_int - takes two pointers to ints and swaps their values
 *@a: First accepted int pointer
 *@b: Second accepted int pointer
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
