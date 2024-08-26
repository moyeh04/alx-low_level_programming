#include "main.h"
/**
 * puts_half - A function that prints half of a string, followed by a new line.
 *
 * @str: Pointer to the address of the first character.
 *
 * Description:
 * The function should print the second half of the string.
 * If the number of characters is odd, the function should print the last n
 * characters of the string, where n = (length_of_the_string - 1) / 2.
 *
 * Return: Nothing(void...)
 */

void puts_half(char *str)
{
	int n = (strlen(str) - 1) / 2;
	int i;

	/* (+1) because array index starts from 0 */
	for (i = (n + 1); str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
