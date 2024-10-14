#include "main.h"

/**
 * _strpbrk - A function that searches a string for any of a set of bytes.
 *
 * @s: Initial segment.
 * @accept: String containing the characters to match in s.
 *
 * Description: It identifies the first occurrence of any byte from the accept
 * string within the s string.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{

	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return (0);
}
