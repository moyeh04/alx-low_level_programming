#include "main.h"

/**
 * fibonacci_variant -	Prints the Fibonacci sequence until a given @limit.
 *
 * @limit: The first @limit Fibonacci numbers.
 *
 * Return: Nothing(void...).
 */

void fibonacci_variant(int limit)
{
	unsigned long base1;
	unsigned long base2;
	unsigned long base3 = 0;
	int i;

	for (i = 0; i < limit; i++)
	{
		if (i == 0)
		{
			base1 = ++i;
			base2 = ++i;
			printf("%lu, %lu, ", base1, base2);
		}
		base3 += base1 + base2;

		printf("%lu", base3);
		if ((i + 1) != limit)
			printf(", ");

		base1 = base2;
		base2 = base3;
		base3 = 0;
	}
	putchar('\n');
}

/**
 * main - Entry point.
 *
 * Return: 0 -> Success.
 */

int main(void)
{
	fibonacci_variant(50);

	return (0);
}
