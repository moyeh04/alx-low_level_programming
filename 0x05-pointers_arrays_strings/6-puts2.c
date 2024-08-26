#include "main.h"

/**
 * puts2 - A function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: Pointer to the address of the first character.
 *
 * Return: Nothing(void...)
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
