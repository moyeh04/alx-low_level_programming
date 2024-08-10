#include "main.h"

/**
 * print_alphabet - prints the alphabet.
 *
 * Description: This prints the alphabet, in lowercase, followed by a new line,
 * using the _putchar function.
 *
 * Return: On success 1.
 *
 */

void print_alphabet(void)
{
	int alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
