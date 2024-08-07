#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: prints the tebahpla from z to a
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char ahpla = 'z';

	while (ahpla >= 'a')
	{
		putchar(ahpla);
		--ahpla;
	}
	putchar('\n');

	return (0);
}
