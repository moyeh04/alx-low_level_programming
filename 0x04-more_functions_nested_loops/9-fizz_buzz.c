#include "main.h"

/**
 * fizz_buzz - For multiples of three it prints Fizz instead of the
 * number and for the multiples of five it prints Buzz.
 * For number which are multiples of both three and five it prints FizzBuzz.
 *
 * Return: Nothing(void...)
 */

void fizz_buzz(void)
{
	int i;
	char *mult_of_3 = "Fizz";
	char *mult_of_5 = "Buzz";
	char *mult_of_3_and_5 = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s", mult_of_3_and_5);
		else if (i % 5 == 0)
			printf("%s", mult_of_5);
		else if (i % 3 == 0)
			printf("%s", mult_of_3);
		else
			printf("%d", i);

		if (i != 100)
			putchar(' ');
	}
	putchar('\n');
}

/**
 * main - Entry point.
 *
 * Return: 0 -> Success.
 */

int main(void)
{
	fizz_buzz();

	return (0);
}
