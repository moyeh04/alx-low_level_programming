#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: Prints numbers of base 10 followed by a new line
 *				Due to Type Promotion, there is no need for casting
 *				int to char.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int num = '0'; /* Search Type Promotion */

	while (num <= '9')
	{
		putchar(num);
		++num;
	}
	putchar('\n');

	return (0);
}
