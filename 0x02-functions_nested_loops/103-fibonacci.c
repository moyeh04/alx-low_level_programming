#include "main.h"

/**
 * fibonacci_even_variant -	Prints the Fibonacci even sequence until
 * a given @limit.
 *
 * @limit: The first @limit Fibonacci numbers.
 *
 * Return: Nothing(void...).
 */

void fibonacci_even_variant(int limit)
{
	int base1;
	int base2;
	int base3 = 0;
	int even_sum = 0;
	int i;

	for (i = 0; i < limit; i++)
	{
		if (i == 0)
		{
			base1 = i;
			base2 = ++i;
		}
		base3 = base1 + base2;

		if (base3 >= 4000000) /*Stop if base3 exceeds 4,000,000*/
			break;
		if ((base3 % 2) == 0)
			even_sum += base3;

		base1 = base2;
		base2 = base3;
	}
	printf("%d", even_sum);
	putchar('\n');
}

/**
 * main - Entry point.
 *
 * Return: 0 -> Success.
 */

int main(void)
{
	fibonacci_even_variant(98);

	return (0);
}
