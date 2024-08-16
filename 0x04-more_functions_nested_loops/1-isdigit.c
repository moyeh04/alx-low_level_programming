#include "main.h"

/**
 * _isdigit - A function that checks for a digit (0 through 9).
 *
 * @c: The digit to be evaluted.
 *
 * Return:  1 if @c is a digit.
 *			0 otherwise.
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}

