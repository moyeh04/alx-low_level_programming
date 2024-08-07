#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: prints the alphabet from a to z except q and e
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'e' || alpha == 'q')
			++alpha;

		putchar(alpha);
		++alpha;
	}
	putchar('\n');

	return (0);
}
