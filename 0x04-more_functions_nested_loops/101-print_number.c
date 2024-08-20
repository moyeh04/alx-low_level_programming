#include "main.h"

/**
 * count_digits - A function that counts the digits of @n.
 *
 * @n: Given number.
 *
 * Return: Number of digits
 */

int count_digits(int n)
{
	int digits = 0; /* Number of digits */

	while (n > 0)
	{
		n /= 10;
		digits++;
	}

	return (digits);
}

/**
 * power_of_ten_from_digits - A function that generates a power
 * of ten based on the number of digits.
 *
 * @n: Given number
 *
 * Return: @n as power of ten.
 */

int power_of_ten_from_digits(int n)
{
	int i;
	int power_digits = 1;

	for (i = 0; i < n; i++)
		power_digits *= 10;

	return (power_digits);
}

/**
 * print_number - A function that prints an integer.
 *
 * @n: Given number.
 *
 * Return: Nothing(void...)
 */

void print_number(int n)
{
	int i;
	int digits_count; 
	int digits_as_p10;

	if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
		return;
	}

	if (n < 0) /* Handle negative numbers Explicitly */
	{
		n = abs(n);
		_putchar('-');
	}

	digits_count = count_digits(n);
	digits_as_p10 = power_of_ten_from_digits(digits_count);

	/*printf("%d digits count:\n", digits_count);*/ /* Debugging */
	/*printf("%d digits as p10:\n", digits_as_p10);*/ /* Debugging */


	/**
	 * We don't want to have 0 as a result
	 * when printing.
	 * Example: (456 -> 4.56 and not 0.456).
	 * that's why we divide digits_as_p10 by 10.
	 */

	for (i = 0; i < digits_count; i++)
	{
		_putchar((n / (digits_as_p10 /= 10)) % 10 + '0');
	}
	_putchar('\n');

}
