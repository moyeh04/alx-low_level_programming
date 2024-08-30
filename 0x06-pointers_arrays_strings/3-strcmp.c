#include "main.h"

/**
 * _strcmp - A function that compares two strings.
 *
 * @s1: Pointer to the first character of the first string.
 * @s2: Pointer to the first character of the second string.
 *
 * Description:
 * strcmp() returns an integer indicating the result of the comparison,
 * as follows:
 * 0, if the s1 and s2 are equal.
 * -ve value if s1 is less than s2.
 * +ve value if s1 is greater than s2.
 * It stops at the first difference it finds.
 *
 * Return: The difference value between the first non-similar characters.
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int diff = 0; /* Implicitly 0, if there is no difference */
	int flag = 0; /* Checks for the first difference, to stop the loop */

	for (i = 0; s1[i] != '\0' && s2[i] != '\0' && flag != 1; i++)
	{
		if (s1[i] != s2[i])
		{
			diff += s1[i] - s2[i];
			flag = 1;
		}
	}
	return (diff);
}
