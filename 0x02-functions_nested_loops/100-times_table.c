#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 *
 * @n: Input number's time table.
 *
 * Return: Nothing(void...).
 */

void print_times_table(int n)
{
	int multiplicand;
	int multiplier;
	int product;

	if (n >= 0 && n <= 15)
	{

		for (multiplicand = 0; multiplicand <= n; multiplicand++)
		{
			for (multiplier = 0; multiplier <= n; multiplier++)
			{
				product = multiplicand * multiplier;

				if (product >= 100)
				{
					_putchar((product / 100) + '0');
					_putchar(((product % 100) / 10) + '0');
					_putchar((product % 10) + '0');
				}
				else if (product >= 10)
				{
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
				else
					_putchar(product + '0');

				if (multiplier != n)
				{
					_putchar(',');
					_putchar(' ');
					if (multiplicand * (multiplier + 1) < 10)
						_putchar(' ');
					if (multiplicand * (multiplier + 1) < 100)
						_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
