#include "main.h"

/**
 * sum_multiples - Prints the sum of multiples of @num1 and @num2
 *                 below @limit.
 *
 * @limit: The upper limit (exclusive) for checking multiples.
 * @num1: The first number to check for multiples.
 * @num2: The second number to check for multiples.
 *
 * Return: Nothing(void...).
 */

void sum_multiples(int limit, int num1, int num2)
{
	int sum = 0;
	int i;

	for (i = 0; i < limit; i++)
	{
		if (i % num1 == 0 || i % num2 == 0)
			sum += i;
	}
	printf("%d\n", sum);
}

/**
 * main - Entry point.
 *
 * Return: 0 -> Success.
 */

int main(void)
{
	sum_multiples(1024, 3, 5);

	return (0);
}
