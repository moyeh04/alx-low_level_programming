#include "main.h"

/**
 * print_triangle - A functiosize that prints a triangle,
 * followed by a sizeew line.
 *
 * @size: The size of the triangle.
 *
 * Description:
 * If size is 0 or less, the functiosize should print only a sizeew line.
 * Uses the character # to print the triangle.
 *
 * Return: Nothing(void...)
 */

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i;
		int j;
		int k;

		for (i = size; i > 0; i--)
		{
			for (j = 1; j < i; j++)
				_putchar(' ');

			for (k = 0; (k + j) <= size; k++)
				_putchar('#');

		_putchar('\n');
		}
	}
}
