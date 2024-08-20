#include "main.h"

/**
 * count_digits - A function that counts the digits of @n.
 *
 * @n: Given number.
 *
 * Todo:
 * Make the solution better by using recursive functions ;)
 *
 * Return: Number of digits
 */

int count_digits(unsigned int n)
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

	for (i = 0; i < n && power_digits < 1000000000; i++)
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
	unsigned int num;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0) /* Handle negative numbers Explicitly */
	{
		_putchar('-');
		num = abs(n);
	}
	else
		num = n;

	digits_count = count_digits(num);
	digits_as_p10 = power_of_ten_from_digits(digits_count);

	/* Debugging */
	/*printf("%d digits count:\n", digits_count);*/
	/*printf("%d digits as p10:\n", digits_as_p10);*/

	for (i = 0; i < digits_count && digits_as_p10 > 1; i++)
	{
		if (digits_as_p10 == 1000000000 && digits_count == 10)
			_putchar((num / digits_as_p10) % 10 + '0');
		/**
		 * We don't want to have 0 as a result
		 * when printing.
		 * Example: (456 -> 4.56 and not 0.456).
		 * that's why we divide digits_as_p10 by 10.
		 * Except for the 10 digit number Since there is a limit for int.
		 */
		_putchar((num / (digits_as_p10 /= 10)) % 10 + '0');
	}
}
