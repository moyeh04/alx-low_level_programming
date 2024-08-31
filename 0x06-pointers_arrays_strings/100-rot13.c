#include "main.h"

/**
 * rot13 - A function that encoedes a string using rot13.
 *
 * @str: Pointer to input string to be encoded.
 *
 * Return: Pointer to encoded string.
 */

char *rot13(char *str)
{
	int i;
	int j;
	char to_be_enc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encoded[] =   "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; to_be_enc[j] != '\0'; j++)
		{
			if (str[i] == to_be_enc[j])
			{
				str[i] = encoded[j];
				break;
				/**
				 * By adding the break statement,
				 * we ensure that as soon as a character is encoded,
				 * the inner loop stops and moves on to the next character
				 * in the input string. This prevents the multiple encoding issue
				 * and makes the function work as a proper ROT13 cipher.
				 */
			}
		}
	}

	return (str);
}
