#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte.
 *
 * @s: The memory area pointed by.
 * @b: Constant byte.
 * @n: number of bytes.
 *
 * Return: A pointer to the memory area s that got replaced with b.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
