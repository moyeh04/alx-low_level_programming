#include "main.h"

/**
 * separators - A function that checks for Separators of words.
 *
 * @str: Pointer to that separator.
 *
 * Return: Either 1 or 0.
 */

int separators(char *str)
{
	int i;
	char separators[14] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '\"',
		'(', ')', '{', '}'};

	for (i = 0; i < 14; i++)
	{
		if (*str == separators[i])
			return (1);
	}
	return (0);
}

/**
 * cap_string - A function that capitalizes all words of a string.
 *
 * @str: Pointer to the first character of the string.
 *
 * Return: Pointer to the first character of the Capatilized string.
 */

char *cap_string(char *str)
{

	int i;
	int corresponding = 'a' - 'A';
	/**
	 * Difference between small letter and it's corresponding
	 * capital letter value in ASCII table
	 */

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[i] -= corresponding; /* To handle the first character explictly */

			else if (separators(&str[i - 1]))
				str[i] -= corresponding;
		}
	}

	return (str);
}
