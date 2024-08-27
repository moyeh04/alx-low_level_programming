#include "main.h"

/**
 * _atoi - A function that converts a string to an integer.
 *
 * @s: Pointer to the first character of the string.
 *
 * Return: Integer from the string.
 */

int _atoi(char *s)
{
	int i;
	int sign = +1;
	unsigned int number = 0;
	/*
	 * Initazlizing number to prevent contigous memory
	 * if the function is called more than once
	 */
	int count = 0; /* Checks if the string has any integers */
	int base = 10;

	for (i = 0; s[i] != '\0'; s++)
	{

		if ((s[i] == ' ' || s[i] == '\t' || (s[i] < '0' || s[i] > '9')) && count > 0)
			break;
		/* To prevent any numbers that exist after the first contigous one */
		else if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			count++;
			number = number * base + (int)(s[i] - '0');
		}
	}
	return (number * sign);
}
