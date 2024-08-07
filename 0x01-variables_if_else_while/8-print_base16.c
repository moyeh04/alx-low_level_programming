#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: Prints all the numbers of base 16 in lowercase, followed
 *				by a new line.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char num = '0';
	char alpha = 'a';

	while (num <= '9')
	{
		putchar(num);
		++num;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		++alpha;
	}
	putchar('\n');

	return (0);
}
