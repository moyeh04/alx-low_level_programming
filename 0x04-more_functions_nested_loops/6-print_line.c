#include "main.h"

/**
 * print_line - A function that draws a straight line in the terminal.
 *
 * @n: The number of times the character _ should be printed.
 *
 * Description:
 * The line should end with a \n
 * If n is 0 or less, the function should only print \n
 *
 * Return: Nothing(void...)
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
