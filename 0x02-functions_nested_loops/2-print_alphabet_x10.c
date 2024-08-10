#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times.
 *
 * Description: This prints the alphabet 10 times, in lowercase,
 * followed by a new line,
 * using the _putchar function.
 *
 * Return: On success 1.
 *
 */

void print_alphabet_x10(void)
{
	int alpha = 'a';
	int count = 0;

	while (count <= 9)
	{
		alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		count++;
	}
}
