#include "main.h"

/**
 * _strchr - A function that locates a character in a string.
 *
 * @s: Pointer to string.
 * @c: Character to look for.
 *
 * Return: pointer to the first occurence of the character,
 *			or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

		return ('\0');
}
