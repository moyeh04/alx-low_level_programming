#include "main.h"

/**
 * _memcpy - A function that copies n bytes from memory area src
 * to memory area dest.
 *
 * @dest: destination memory area.
 * @src: source memory area.
 * @n: number of bytes.
 *
 * Return: A pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
