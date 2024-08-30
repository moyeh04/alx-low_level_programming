#include "main.h"

/**
 * reverse_array - A function that reverses the content of
 * an array of integers.
 *
 * @a: Pointer to the first element of the array.
 * @n: Size of the array.
 *
 * Return: Nothing(void...)
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n; i++, n--)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
	}
}
