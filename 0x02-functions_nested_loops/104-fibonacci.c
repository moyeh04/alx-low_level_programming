#include "main.h"

/* Declaring a Constant */

#define MAX_DIGITS 1000000000 /* One billion 1,000,000,000 */

/**
 * fibonacci_variant - Prints the Fibonacci sequence up to a given @limit.
 *
 * @limit: The number of Fibonacci numbers to print.
 *
 *
 * Explanation:
 * This function tackles the challenge of printing large Fibonacci numbers
 * by splitting them into two parts.
 * The following explanations are crucial for understanding the
 * intricate logic behind this approach.
 *
 * MAX_DIGITS defines the threshold for splitting large Fibonacci numbers into
 * two parts: the lower part (baseX_p2) and the upper part (baseX_p1).
 * This allows us to handle numbers that exceed the capacity of a typical
 * unsigned long type (which is limited to a maximum value of approximately 
 * 4 billion on many systems).
 *
 * By setting MAX_DIGITS to 1 billion, we effectively divide each large number 
 * into a "lower" 9-digit part (which can be managed by baseX_p2) and an 
 * "higher" part (managed by baseX_p1) that stores any overflow or carry from 
 * the lower part.
 * 
 * This approach lets us handle much larger Fibonacci numbers than a single 
 * unsigned long variable could accommodate by itself, essentially extending 
 * our range to approximately a billion squared.k
 *
 * Key Concept: Splitting and Carrying
 * Due to Betty warnings, this explanation is linked to lines 122 and 123.
 * + base3_p2 / MAX_DIGITS: We add this carry to the upper part (base3_p1)
 *   before we lose it when calculating the remainder.
 *   This step is crucial for maintaining the integrity of our large numbers.
 *
 * base3_p2 %= MAX_DIGITS: After adding the carry, we keep only the lower part
 * (the remainder). This ensures our lower part always stays within MAX_DIGITS.
 *
 * Extra Explanation: -The Evolution of Upper Parts-
 * Initially, base2_p1 and base1_p1 are 0 until base3_p1 obtains a carry.
 * This occurs when we fail the if conditional and enter the 'outbounds' of
 * MAX_DIGITS.
 * At this point,
 * base2_p1 will capture the carry from base3_p1 in the subsequent loop.
 * Essentially, base2_p1 begins to store the first (higher) part of the number,
 * mirroring b3's behavior, and b1 follows suit. This process creates a
 * nested Fibonacci-like sequence for the higher number parts.
 * The term 'like' is used because we're also
 * adding (+ base3_p2 / MAX_DIGITS),
 * which accounts for carries from the lower parts (more on that later),
 * intertwining with our new nested Fibonacci sequence.
 *
 * Summary: By crafting this variation of the Fibonacci sequence
 * before reaching the
 * limit of the long int type, we've effectively extended our
 * range to approximately
 * a billion * billion, dramatically
 * increasing the size of numbers we can handle.
 *
 * Conditional Logic Explained (linked to line 117):
 * base3_p1 < 1:
 * This check is crucial to prevent false positives in our condition.
 * Even after we start dealing with carries and upper parts, some lower part
 * additions might not reach MAX_DIGITS. Without this check,
 * we might prematurely think we're dealing with small numbers again,
 * leading to incorrect output.
 *
 * Carry Handling (linked to line 122):
 * This step accounts for both the Fibonacci-like growth in the upper parts
 * and any carries from the lower parts.
 * It's a key point where our nested sequences intertwine,
 * ensuring we don't lose any value as our numbers grow exponentially.
 *
 * Debugging Insights:
 * These print statements were invaluable for understanding the flow:
 * printf("\nb3_p2:%lu", base3_p2);
 * printf("\nb3_p1:%lu", base3_p1);
 * printf("\nb1:%lu", base1_p2);
 * printf("\nb2:%lu", base2_p2);
 * printf("\nb1b2b3:%lu.%lu\n", base1_p1, base2_p1);
 *
 * Printing Nuances (linked to line 124):
 * We add padding of 09 (9 zeros, as MAX_DIGITS is 10 digits)
 * to maintain consistency.
 * This alignment is crucial when one part is small (e.g., 100)
 * and the other is large,
 * preventing misleading outputs due to skipped zeros.
 * Example: With Padding: 987000135 (Correct). Without: 987135 (Misleading).
 *
 * Return: Nothing (void...). The function prints results directly.
 */

void fibonacci_variant(int limit)
{
	unsigned long base1_p2 = 0; /*Initialize F(n-2) lower number parts*/
	unsigned long base1_p1 = 0; /*Initialize F(n-2) higher number parts*/
	unsigned long base2_p2 = 0; /*Initialize F(n-1) lower number parts*/
	unsigned long base2_p1 = 0; /*Initialize F(n-1) higher number parts*/
	unsigned long base3_p2 = 0; /*Initialize current F(n) lower number parts*/
	unsigned long base3_p1 = 0; /*Initialize current F(n) higher number parts*/
	int i;

	for (i = 0; i < limit; i++)
	{
		if (i == 0) /*Initialize with 1 and 2 (One time condition)*/
		{
			base1_p2 = ++i; /* Set base1_p2 to 1 */
			base2_p2 = ++i; /* Set base2_p2 to 2 */
			printf("%lu, %lu", base1_p2, base2_p2);
		}
		/* Calculate the lower part of the next Fibonacci number */
		base3_p2 = base1_p2 + base2_p2;
		if ((base1_p2 + base2_p2) <= MAX_DIGITS && base3_p1 < 1)
			printf(", %lu", base3_p2); /* Print the current Fibonacci number */
		else
		{
			/* Handle carry and calculate upper part */
			base3_p1 = (base1_p1 + base2_p1) + (base3_p2 / MAX_DIGITS); /*Adding Carry*/
			base3_p2 %= MAX_DIGITS; /* Retain only the remainder in lower part */
			printf(", %lu%09lu", base3_p1, base3_p2);
			/* Print the current Fibonacci number with padding */
		}
		/* Shift values for next iteration */
		base1_p2 = base2_p2; /* Update base1_p2 for the next loop */
		base2_p2 = base3_p2; /* Update base2_p2 for the next loop */
		base1_p1 = base2_p1; /* Update base1_p1 for the next loop */
		base2_p1 = base3_p1; /* Update base2_p1 for the next loop */
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
