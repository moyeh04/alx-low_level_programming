#include "main.h"

/**
 * print_diagsums - A function that prints the sum of the two diagonals of a
 * square matrix of integers.
 *
 * @a: casted array.
 * @size: Size of the array.
 *
 * Description: Note that in the following example we are casting an int[][]
 * into an int*. This is not something you should do. The goal here is to make
 * sure you understand how an array of array is stored in memory.
 *
 * Return: Nothing(void...).
 */

void print_diagsums(int *a, int size)
{
	int row;
	int column;
	int sum_main_d = 0;
	int sum_anti_d = 0;

	for (row = 0, column = 0; row < size; row++, column++)
	{
		sum_main_d += *(a + (row * size) + column);
	}
	for (row = (size - 1), column = 0; row >= 0; row--, column++)
	{
		sum_anti_d += *(a + (row * size) + column);
	}
	printf("%d, %d\n", sum_main_d, sum_anti_d);
}
