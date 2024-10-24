#include "main.h"

/**
 * try_sqrt - Helper function to recursively find natural square root
 *
 * @n: Original number to find square root of
 * @i: Current number being tested as potential square root
 *
 * Description: Since finding a square root requires tracking both the original
 * number (n) and the current guess (i), we need this helper function to handle
 * the recursive process. It systematically tries each number, starting from 1,
 * until it either finds the natural square root or determines none exists.
 *
 * Return: Natural square root (i) if found, -1 if no natural square root
 * exists.
 */


int try_sqrt(int n, int i)
{
	if ((i * i) == n)
		return (i);
	if ((i * i) < n)
		return (try_sqrt(n, (i + 1)));

	return (-1);
}

/**
 * _sqrt_recursion - A function that returns the natural square root of a
 * number.
 *
 * @n: Number to find square root of
 *
 * Description: This function handles the initial input validation and starts
 * the recursive process using a helper function (try_sqrt). We need the helper
 * pattern here because tracking both the original number and current test
 * number requires two parameters, while maintaining a clean public
 * interface with just one parameter.
 *
 * Return: Natural square root of n, or -1 if n doesn't have a natural
 * square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);

	return (try_sqrt(n, 1));
}
