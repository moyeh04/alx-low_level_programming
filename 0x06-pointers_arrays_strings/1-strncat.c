#include "main.h"

/**
 * _strncat - A function that concatenates two strings.
 *
 * @dest: Pointer to the first character of the first string.
 * @src: Pointer to the first character of the second string.
 * @n: Maximum number of bytes to be copied.
 *
 * Description:
 * The _strncat function is similar to the _strcat function, except that
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 *
 * Return: Pointer to character.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int first_str_len = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[first_str_len + i] = src[i];

	dest[first_str_len + i] = '\0';

	return (dest);
}
