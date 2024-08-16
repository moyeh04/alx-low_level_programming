#include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 *
 * @c: The character to be evaluted.
 *
 * Return:  1 if @c is uppercase.
 *			0 otherwise.
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}

