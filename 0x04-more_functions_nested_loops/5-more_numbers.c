#include "main.h"

/**
 * more_numbers - A function that prints 10 times the numbers,
 *				  from 0 to 14, followed by a new line.
 *
 * Return: Nothing(void...)
 */

void more_numbers(void)
{
	int i;
	int u; /* Units digit */
	int t; /* Tens digit */

	for (i = 0; i < 10; i++)
	{
		for (t = 0; t <= 1; t++)
		{
			for (u = 0; u <= 9; u++)
			{
				if (t == 1 && u > 4)
					break;
				if (t > 0)
					_putchar(t + '0');
				_putchar(u + '0');
			}
		}
		_putchar('\n');
	}
}
