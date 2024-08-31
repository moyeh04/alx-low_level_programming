#include "main.h"

/**
 * rev_string - A function that reverses a string.
 *
 * @s: Pointer to the first character of the string.
 *
 * Return: Nohting(void...)
 */

void rev_string(char *s)
{
	int len = strlen(s); /* This doesn't include the null character */
	int i = 0;
	int j = len - 1;
	char temp;

	/**
     * Let's break this down:
     *
     * 1. If our string is "hello":
     *    - It has 5 characters
     *    - But in memory, it's actually: ['h','e','l','l','o','\0']
     *
     * 2. strlen(s) gives us 5 (doesn't count '\0')
     *
     * 3. Array indices:
     *    - Start from 0
     *    - So valid indices are 0, 1, 2, 3, 4
     *    - Last index is always (length - 1)
     *
     * 4. That's why we set j = len - 1:
     *    - j = 5 - 1 = 4
     *    - s[4] is the last character 'o'
     *
	 * 5. In a forward loop, we'd use:
     *    - for (j = 0; j < len; j++)
     *    - This goes from 0 to 4 for "hello"
     */

	while (i < j)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;

		i++;
		j--;
	}
}
