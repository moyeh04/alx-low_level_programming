#include "main.h"

/**
 * _strcat - A function that concatenates two strings.
 *
 * @dest: Pointer to the first character of the first string.
 * @src: Pointer to the first character of the second string.
 *
 * Return: Pointer to character.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int first_str_len = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
		dest[first_str_len + i] = src[i];

	dest[first_str_len + i] = '\0';

	return (dest);
}
