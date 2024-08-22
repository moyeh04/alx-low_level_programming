#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers.
 *
 * @a: Address of a that holds the value.
 * @b: Address of b that holds the value.
 *
 * Return: Nothing(void...)
 */

void swap_int(int *a, int *b)
{
	int holder = *b;

	*b = *a;

	*a = holder;
}
