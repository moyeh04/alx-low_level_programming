#include "main.h"

/**
 * print_array - A function that prints n elements of an array of integers,
 * followed by a new line.
 *
 * @a: Pointer to the first element of the array.
 * @n: Size of the array.
 *
 * Return: Nothing(void...)
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (n - 1 != i)
			printf(", ");
	}
	printf("\n");
}
