# include "holberton.h"

/**
 * _isalpha - accepts char
 *                  returns 0 or 1
 *                  0 if not alphabet
 *                  1 if part of alphabet
 * @c: int took for checking
 *
 * Return: alwayse 0
 *
 * does-tests weather H,0,o,108,and \n in alphabet
 */



int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);


}
