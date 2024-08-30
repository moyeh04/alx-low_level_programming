#include "main.h"

/**
 * _strncpy - A function that copies a string.
 *
 * @dest: Pointer to the first character of the first string.
 * @src: Pointer to the first character of the second string.
 * @n: Maximum number of bytes to be copied.
 *
 * Description:
 * The  strncpy() function is similar,
 * except that at most n bytes of src are copied.
 * Warning: If there is no null byte among the first n bytes of src,
 * the string placed in dest will not be null-terminated.
 *
 * Return: Pointer to character.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
	dest[i] = '\0';

	return (dest);
}
