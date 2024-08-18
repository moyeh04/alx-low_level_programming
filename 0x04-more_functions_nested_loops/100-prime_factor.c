#include "main.h"

/**
 * largest_prime_factor - a function that finds and prints
 * the largest prime factor of a number followed by a new line.
 *
 * @number: The given number.
 *
 * Description:
 * To learn / Todo: Learn how to only inlclude prime factors,
 * not just odd numbers.
 * Using the 6k +- 1 rule.
 * I spent over 5 hours in this task hope it was worth.
 *
 * Using sqrt(number), why? ask Claude or GPT.
 * The answer is because after the sqrt(@number).
 * We might encouter factors of the smaller number
 * that we already took into place and divided them with @number.
 * so it makes the code more efficient.
 *
 * Return: Nothing(void...)
 */

void largest_prime_factor(long number)
{
	int prime;

	for (prime = 2; prime <= sqrt(number); prime += 2)
	{
		while (number % prime == 0)
			number /= prime;

		if (prime == 2)
			prime = 1; /* Start from the first odd prime */
	}
	printf("%ld\n", number);
}

/**
 * main - Entry point.
 *
 * Return: 0 -> Success.
 */

int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
