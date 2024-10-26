#include "main.h"

/**
 * is_compare - A helper function that compares characters from the start
 * and end of a string.
 *
 * @s: Pointer to the string.
 * @n: Number of character pairs to compare.
 * @i: Current index from the start.
 * @string_tail: Length of the string.
 *
 * Explanation:
 * When n arrives at 0, it indicates that all character pairs have been
 * successfully compared and matched. This means the string is a palindrome.
 * If n is greater than 0, the function continues comparing the characters
 * until all necessary pairs are checked.
 *
 * Return: 1 if all comparisons are successful (n is 0); 0 otherwise.
 */

int is_compare(char *s, int n, int i, int string_tail)
{
	if (n == 0)
		return (1);

	/* string_tail - 1, because index starts from 0 */

	if (s[i] == s[(string_tail - 1) - i])
		return (is_compare(s, (n - 1), (i + 1), string_tail));

	return (0);
}

/**
 * is_palindrome - A function that returns 1 if a string is a palindrome and 0
 * if not.
 *
 * @s: Pointer to string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int string_tail = strlen(s);
	int n;

	if (string_tail % 2 == 0)
		n = strlen(s) / 2;
	else
		n = (strlen(s) - 1) / 2;

	return (is_compare(s, n, 0, string_tail));
}
