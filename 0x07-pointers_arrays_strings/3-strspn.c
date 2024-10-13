#include "main.h"


/**
 * _strspn - A function that gets the length of a prefix substring.
 *
 * @s: Initial segment.
 * @accept: String containing the characters to match in s.
 *
 * Description: A function that that calculates how many characters from the
 * start of the string s consist only of characters found in the string accept.
 *
 * Return: number of bytes in the initial segment of s which consist only of
 * bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int stp_byte = 1;
	int counter = 0;
	int len = strlen(accept);

	while (*s != '\0')
	{
		for (i = 0; i < len; i++)
		{
			if (*s == accept[i])
			{
				stp_byte = 0;
				counter++;
			}
		}
		if (stp_byte == 1)
			break;

		s++;
		stp_byte = 1;
	}

	return (counter);
}
