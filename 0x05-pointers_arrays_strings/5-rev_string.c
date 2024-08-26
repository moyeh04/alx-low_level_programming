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
	int len = strlen(s); /* This includes the null character */
	int i = 0;
	int j = len - 1;
	char temp;

	while (i < j)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;

		i++;
		j--;
	}
}
