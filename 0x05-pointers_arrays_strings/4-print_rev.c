#include "main.h"

/**
 * print_rev - A function that prints a string, in reverse,
 * followed by a new line.
 *
 * @s: Pointer to the first character of the string.
 *
 * Return: Nohting(void...)
 */

void print_rev(char *s)
{
	int i;
	
	for(i = strlen(s); i >= 0; i--) 
		_putchar(s[i]);

	_putchar('\n');
}
