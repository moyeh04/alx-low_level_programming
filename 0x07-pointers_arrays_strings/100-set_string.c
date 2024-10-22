#include "main.h"

/**
 * set_string - A function that sets the value of a pointer to a char.
 *
 * @s: A pointer that points to the address of another pointer that has the
 * new string.
 * @to: A pointer to the original string.
 *
 * Return: Nothing(void...).
 */

void set_string(char **s, char *to)
{
	*s = to;
}
