#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits.
 *
 * Return: (0) -> Success.
 */

int main(void)
{
	int digit1 = '0';
	int digit2 = '1';

	while (digit1 <= '9' && digit2 <= '9')
	{
		putchar(digit1);
		putchar(digit2);

		if (digit1 < '8')
		{
			putchar(',');
			putchar(' ');
		}

		if (digit2 == '9')
			digit2 = ++digit1;

		++digit2;
	}
	putchar('\n');

	return (0);
}
