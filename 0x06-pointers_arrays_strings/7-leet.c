#include "main.h"

/**
 * leet - A function that encoedes a string to 1337.
 *
 * @str: Pointer to input string to be encoded.
 *
 * Description:
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 *
 * Return: Pointer to encoded string.
 */

char *leet(char *str)
{
	int i;
	int j;
	int corresponding = 'a' - 'A'; /* 32 */
	char to_be_enc[] = "AEOTL";
	char encoded[] =   "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; to_be_enc[j] != '\0'; j++)
		{
			if (str[i] == to_be_enc[j] || str[i] == to_be_enc[j] + corresponding)
				str[i] = encoded[j];
		}
	}

	return (str);
}
