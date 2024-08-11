#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Return: Nothing(void...).
 */

void times_table(void)
{
	int multiplicand;
	int multiplier;
	int product;

	for (multiplicand = 0; multiplicand <= 9; multiplicand++)
	{
		for (multiplier = 0; multiplier <= 9; multiplier++)
		{
			product = multiplicand * multiplier;

			if (product >= 10)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
				_putchar(product + '0');

			if (multiplier != 9)
			{
				_putchar(',');
				_putchar(' ');
				if (multiplicand * (multiplier + 1) < 10)
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
