#include "main.h"

/**
 * _strstr - A function that locates a substring.
 *
 * @haystack: The string to search in.
 * @needle: The string to search for.
 *
 * Description: We need to make temp pointer of h and n because maybe there is
 * another substring, that is not the point, the point it is reseting allowing
 * for multiple tries inside the main haystack string itself.
 *
 * Return: Pointer to the beginning of the located substring, or NULL if not
 * found.
 */

char *_strstr(char *haystack, char *needle)
{
	int first_encounter = 0;
	char *pointer;
	char *h;
	char *n;

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*h == *n && *n != '\0')
		{
			if (first_encounter == 0)
			{
				first_encounter = 1;
				pointer = h;
			}
			n++;
			h++;
		}
		if (*n == '\0')
			return (pointer);

		haystack++;
		first_encounter = 0;
	}

	return (0);
}
