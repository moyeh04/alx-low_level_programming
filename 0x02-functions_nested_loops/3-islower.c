#include "main.h"

/**
 * _islower - Checks for lowercase character.
 *
 * @c: character to be checked.
 *
 * Return: 1 if @c is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
