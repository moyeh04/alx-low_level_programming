#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: Prints numbers of base 10 followed by a new line
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		++num;
	}
	putchar('\n');

	return (0);
}
