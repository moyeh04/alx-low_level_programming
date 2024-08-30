#include "main.h"

/**
 * string_toupper - A function that changes all lowercase letters of
 * a string to uppercase.
 *
 * @lower: Pointer to the first character of the string that is going
 * to be converted to uppercase.
 *
 * Return: Pointer to the first character of the uppercase string.
 */

char *string_toupper(char *lower)
{

	int i;
	int corresponding = 32;
	/**
	 * Difference between small letter and it's corresponding
	 * capital letter value in ASCII table
	 */

	for (i = 0; lower[i] != '\0'; i++)
	{
		if (lower[i] >= 'a' && lower[i] <= 'z')
			lower[i] -= corresponding;
	}

	return (lower);
}
