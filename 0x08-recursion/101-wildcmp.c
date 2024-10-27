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
 * Why it handles '*' matching:
 * - When '*' is encountered in s2, the function tries two paths:
 * 1. First evaluates wildcmp(s1 + 1, s2) completely
 * (trying to match current '*' with current character)
 * 2. Only if that fails (returns 0), then it tries wildcmp(s1, s2 + 1)
 * (moving past the '*' to try matching the next pattern)
 * - This is NOT simultaneous evaluation, but sequential due to
 * || short-circuit behavior
 * - The recursion is controlled by proper base cases and the fact that
 * we're either consuming s1 or s2 in each recursive call
 *
 * Debugging Statements:
 * printf("Comparing s1: '%s' with s2: '%s'\n", s1, s2);
 * printf("Taking * paths with s1: '%s' s2: '%s'\n", s1, s2);
 *
 * Return: 1 if the strings are identical, 0 otherwise.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == '\0' && *s2 == '*')  /* To prevent infinite recursion */
		return (wildcmp(s1, s2 + 1));

	if (*s1 == *s2)
		return (wildcmp((s1 + 1), (s2 + 1)));
	if (*s2 == '*')
	{
		if (s2[1] == '*')
			return (wildcmp(s1, (s2 + 1)));

		if (wildcmp(s1, (s2 + 1)) || wildcmp((s1 + 1), s2))
			return (1);
	}

	return (0);
}
