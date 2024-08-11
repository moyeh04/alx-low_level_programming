#include "main.h"

/**
 * fibonacci_variant - Prints the Fibonacci sequence up to a given @limit.
 *
 * @limit: The number of Fibonacci numbers to print.
 *
 * Explanation:
 * Due to Betty warnings, this is linked to lines 77 and 82.
 * + base3_p2 / max_digits: for adding the carry
 * if it exists before losing it when
 * calculating the remainder.
 *
 * base3_p2 %= max_digits: After adding carry, we keep the lower part
 * (the remainder).
 *
 * Extra Explanation: Initially, base2_p1 and base1_p1 are 0 until
 *                    base3_p1 obtains a carry.
 *                    This happens when there's a failure
 *                    of the if conditional and we enter outbounds
 *                    of max_digits. Then base2_p1 will obtain the
 *                    carry of base3_p1 in the following loop.
 *                    In other words, base2_p1 will start storing
 *                    its first (higher) part of the number just
 *                    like b3, and so will b1.
 *                    It's like a nested Fibonacci sequence for the
 *                    higher numbers. I'm saying 'like' because there
 *                    is the addition of (+ base3_p2 / max_digits)
 *                    which accounts for the carry that comes from
 *                    the lower number parts alongside the new
 *                    nested Fibonacci sequence.
 * Summary: By making a variation of the Fibonacci sequence before
 * the limit of the long int type, we're ensuring it's
 * like a billion * billion limit now.
 *
 * Some Debugging statements I used:
 * printf("\nb3_p2:%lu", base3_p2);
 * printf("\nb3_p1:%lu", base3_p1);
 * printf("\nb1:%lu", base1_p2);
 * printf("\nb2:%lu", base2_p2);
 * printf("\nb1b2b3:%lu.%lu\n", base1_p1, base2_p1);
 *
 * The following is linked to line 83.
 * Adding padding 09 (9 because of max_digits being 10 digits).
 * This alignment keeps the numbers consistent, even
 * if one part is small like 100 and the other is large to prevent skipped 0s.
 * Example: With Padding: 987000135 (Good). Without: 987135 (Bad).
 *
 * Return: Nothing (void...).
 */

void fibonacci_variant(int limit)
{
	unsigned long base1_p2 = 0, base1_p1 = 0;
	unsigned long base2_p2 = 0, base2_p1 = 0;
	unsigned long base3_p2 = 0, base3_p1 = 0;
	unsigned long max_digits = 1000000000; /* One billion 1,000,000,000 */
	int i;

	for (i = 0; i < limit; i++)
	{
		if (i == 0) /* Starting with 1 and 2 one time condition*/
		{
			base1_p2 = ++i;
			base2_p2 = ++i;
			printf("%lu, %lu", base1_p2, base2_p2);
		}
		base3_p2 = base1_p2 + base2_p2;
		if ((base1_p2 + base2_p2) <= max_digits && base3_p1 < 1)
			printf(", %lu", base3_p2);
			/**
			 * base3_p1 < 1: to prevent the condition to be true because of
			 * some lower parts might not add to max_digits after adding a carry
			 * to the higher part numbers.
			 */
		else
		{
			base3_p1 = (base1_p1 + base2_p1) + (base3_p2 / max_digits); /*Adding Carry*/
			/**
			 * fibonacci and future carries too that might come from lower part
			 * numbers adding up to more than max_digits which should happen.
			 */
			base3_p2 %= max_digits; /*Remainder*/
			printf(", %lu%09lu", base3_p1, base3_p2);
		}
		base1_p2 = base2_p2;
		base2_p2 = base3_p2;
		base1_p1 = base2_p1;
		base2_p1 = base3_p1;
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
	fibonacci_variant(98);

	return (0);
}
