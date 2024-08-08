#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: Prints all possible combinations of two two-digit numbers.
 *
 * Return: (0) -> Success
 */

int main(void)
{
	int double_digit1 = 0;
	int double_digit2 = 0;

	while (double_digit1 <= 98)
	{
		double_digit2 = 0;

		while (double_digit2 <= 99)
		{

			if (double_digit1 > double_digit2)
			{
				double_digit2 = double_digit1 + 1;

			}
			putchar((double_digit1 / 10) + '0');
			putchar((double_digit1 % 10) + '0');
			putchar(' ');
			putchar((double_digit2 / 10) + '0');
			putchar((double_digit2 % 10) + '0');

			if (!(double_digit1 == 98 && double_digit2 == 99))
			{
				putchar(',');
				putchar(' ');
			}

		++double_digit2;
		}

		++double_digit1;
	}

	putchar('\n');

	return (0);
}
