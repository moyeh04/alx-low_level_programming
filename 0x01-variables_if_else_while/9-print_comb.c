#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: Write a program that prints all possible combinations
 *				of single-digit numbers.
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

		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}

		++num;
	}
	putchar('\n');

	return (0);
}
