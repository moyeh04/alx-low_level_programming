#include "main.h"

/**
 * print_diagonal - A function that draws a diagonaly line on the terminal.
 *
 * @n: The number of times the character \ should be printed
 *
 * Description:
 * The diagonal should end with a \n
 * If n is 0 or less, the function should only print a \n
 *
 * Return: Nothing(void...)
 */

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');

		_putchar('\\');

		if ((i + 1) != n)
		_putchar('\n');

	}
	_putchar('\n');
}
