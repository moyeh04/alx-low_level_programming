#include "main.h"

/**
 * wildcmp - A function that compares two strings and returns 1 if the strings
 * can be considered identical, otherwise return 0.
 *
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string (can contain the special character *).
 *
 * Explanation:
 * The special character * can replace any string (including an empty string).
 *
 * Why it wouldn't go into infinite calls:
 * - When `*` is encountered in s2,
 *   the `||` operator evaluates both recursive calls simultaneously:
 *   - `wildcmp(s1 + 1, s2)` and `wildcmp(s1, s2 + 1)`.
 * - This means the function tests both paths at the same time. If either call
 *   returns 1, the function will return immediately,
 *   preventing infinite recursion, It's like a short-circuit evaluation.
 *
 * Return: 1 if the strings are identical, 0 otherwise.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2)
		return (wildcmp((s1 + 1), (s2 + 1)));

	if (*s2 == '*')
	{
		if (s2[1] == '*')
			return (wildcmp(s1, (s2 + 1)));

		if (wildcmp((s1 + 1), s2) || wildcmp(s1, (s2 + 1)))
			return (1);
	}

	return (0);
}
