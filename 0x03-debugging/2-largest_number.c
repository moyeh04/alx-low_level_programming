#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 *
 * Explanation:
 *		If a is largest than b and c.
 *		A is the largest.
 *			This could fail because of two reasons:
 *				A is not larger than b and c.
 *				OR
 *				A is equal to either b or c or both.
 *				so this would lead to the second condition.
 *		If b is larger than c (Or previously a was equal to b).
 *		B is the largest.
 *			This could fail because of two reasons:
 *			B is not larger than c.
 *			OR
 *			B is equal to c also.
 *				so this would lead to the latest condition.
 *		C is the largest (Or maybe c is equal to a and b).
 *		It is going to return the largest value anyway.
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c) /* Failing this means a is smaller than b and c */
	{
		largest = a;
	}
	else if (b > c) /* a is already smaller so one comparison is enough */
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
