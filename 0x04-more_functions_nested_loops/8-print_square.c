#include "main.h"

/**
 * print_square - A function that prints a square, followed by a new line.
 *
 * @size: The size of the square
 *
 * Description:
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the square
 *
 * Return: Nothing(void...)
 */

void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');

		if (i != (size - 1))
		_putchar('\n');

	}
	_putchar('\n');
}
