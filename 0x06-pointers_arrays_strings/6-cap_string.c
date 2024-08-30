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
	if (*str == ' ' || *str ==	'\t' || *str == '\n' || *str == ',' ||
			*str == ';' || *str == '.' || *str == '!' || *str == '?' ||
			*str == '"' || *str == '(' || *str == ')' || *str == '{' ||
			*str == '}')
	{
		return (1);
	}
	else
	{
		return (0);
	}
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
	int corresponding = 32;
	/**
	 * Difference between small letter and it's corresponding
	 * capital letter value in ASCII table
	 */

	for (i = 0; str[i] != '\0'; i++)
	{
		if (separators(&str[i]))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= corresponding;
		}

	}

	return (str);
}
