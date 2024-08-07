#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of three digits.
 *
 * Return: (0) -> Success.
 */

int main(void)
{
	int digit1 = '0';
	int digit2 = '1';
	int digit3 = '2';

	while (digit1 <= '9' && digit2 <= '9' && digit3 <= '9')
	{
		putchar(digit1);
		putchar(digit2);
		putchar(digit3);

		if (digit1 < '7')
		{
			putchar(',');
			putchar(' ');
		}

		if (digit2 == '8')
			digit2 = ++digit1;

		if (digit3 == '9')
			digit3 = ++digit2;

		++digit3;
	}
	putchar('\n');

	return (0);
}
