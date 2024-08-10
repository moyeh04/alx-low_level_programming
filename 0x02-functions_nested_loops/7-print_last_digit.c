#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @num: Number
 *
 * Return: returns the last digit of @num
 *
 */

int print_last_digit(int num)
{
	_putchar(abs((num % 10)) + '0');

	return (abs(num % 10));
}
