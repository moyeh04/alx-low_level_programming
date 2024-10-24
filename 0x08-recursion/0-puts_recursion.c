#include "main.h"

/**
 * _puts_recursion - A function that prints a string, followed by a new line.
 *
 * @s: Pointer to string.
 *
 * Return: Nothing(void...).
 */

void _puts_recursion(char *s)
{

	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
