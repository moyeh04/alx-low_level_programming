#include "main.h"

/**
 * prime_test - A helper function that checks if an input integer is prime
 * or not.
 *
 * @n: input integer to test for primality.
 * @i: current divisor, starting from 5.
 *
 * Explanation: This function implements the 6k ± 1 rule for checking
 * the primality of a number. It checks potential divisors starting from 5
 * and considers both i and i + 2. The condition if (i * i > n)
 * serves as a stopping criterion. If i squared is greater than n,
 * it confirms that n has no divisors other than 1 and itself,
 * thereby asserting that n is prime. This is because, if no divisors
 * were found up to the square root of n,
 * there can be no divisors beyond this point.
 * If n is divisible by either i or i + 2,
 * the function will return 0 (not prime).
 *
 * This approach is efficient as it reduces the number of checks
 * by focusing only on numbers of the form 6k ± 1,
 * which significantly narrows down the candidates.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */

int prime_test(int n, int i)
{
	/*if (i * i > n)*/
	/*	return (1);*/

	if (i * i <= n)
	{
		if (n % i == 0)
			return (0);

		if (n % (i + 2) == 0)
			return (0);
	}
	else
		return (1);

	return (prime_test(n, (i + 6)));
}

/**
 * is_prime_number - A function that returns (1) if the input integer is a
 * prime number, otherwise return (0).
 *
 * @n: input integer.
 *
 * Explanation:
 * This function focuses on identifying prime numbers efficiently
 * by eliminating candidates that cannot be prime.
 * The following explanations are crucial for understanding the
 * reasoning behind this approach.
 *
 * Exclusion of Small Primes:
 * First, we handle 2 and 3 explicitly since they are the
 * only even prime and the first odd prime. After verifying these,
 * we can focus on larger candidates.
 *
 * By excluding multiples of 2 and 3, we streamline our checks,
 * allowing us to concentrate on numbers that are more likely
 * to be prime.
 *
 * Key Concept: The Forms of Candidates
 * Numbers greater than 3 can be expressed in the forms
 * 6k - 1 and 6k + 1. This is significant because:
 * - Numbers of the form 6k (multiples of 6) are divisible by 6.
 * - Numbers of the form 6k + 2 and 6k + 4 are even (hence not prime).
 * - Numbers of the form 6k + 3 are divisible by 3.
 * This means only candidates of the forms 6k - 1
 * and 6k + 1 need to be checked for primality.
 *
 * Extra Explanation: Why 6k ± 1?
 * This approach allows us to eliminate more than two-thirds
 * of potential candidates, effectively narrowing down
 * our search. By checking only these forms, we reduce
 * unnecessary checks against numbers that are guaranteed
 * to be composite.
 *
 * Example Breakdown:
 * Let's say we want to check if 37 is prime.
 * We start from i = 5 (first candidate of the form 6k ± 1):
 * - Check 5: 37 % 5 gives a remainder, so not divisible.
 * - Check 7: 37 % 7 gives a remainder, so not divisible.
 * We continue incrementing i by 6 to check further
 * candidates, ultimately finding no divisors.
 *
 * Summary: This method efficiently identifies prime numbers
 * by focusing only on the viable candidates.
 * By handling small primes and recognizing the forms of larger
 * numbers, we create a streamlined process that minimizes checks
 * and reduces computational effort.
 *
 * Conditional Logic Explained:
 * When i^2 > n, we stop checking further because
 * any non-prime n would have a divisor less than or
 * equal to its square root. This is a crucial aspect of
 * efficient primality testing.
 *
 * Return: A boolean indicating whether the number is prime.
 */

int is_prime_number(int n)
{

	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);

	if (n % 2 == 0 || n % 3 == 0)
		return (0);


	return (prime_test(n, 5));
}
