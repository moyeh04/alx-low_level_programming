#include "main.h"

/**
 * print_number - A function that prints an integer.
 *
 * @n: Input number.
 *
 * It's the same task in 0x04 Project, but with the implementation of
 * Recursive function.
 *
 * Return: Nothing(void...)
 */

void print_number(int n)
{
	unsigned int num;

	num = n;
	/**
	 * Initially, 'num' is set to 'n'. If 'n' is negative,
	 * 'num' will be corrected after the sign check.
	 * 'n' itself remains unchanged, so 'num' is safely updated.
	 * Until then, 'num' holds the raw value of 'n' (positive or negative),
	 * not a garbage value.
	 */

	if (n < 0)
	{
		_putchar('-');
		num = -n; /* Here n is still the same value */
	}
	if ((num / 10) != 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
