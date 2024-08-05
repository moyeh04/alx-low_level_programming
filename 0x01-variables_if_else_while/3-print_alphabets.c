#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: prints the alphabet from a to z followed by A to Z
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char alpha = 'a';
	char Alpha = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		++alpha;
	}
	while (Alpha <= 'Z')
	{
		putchar(Alpha);
		++Alpha;
	}
	putchar('\n');

	return (0);
}
