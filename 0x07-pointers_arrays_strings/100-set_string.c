#include "main.h"

/**
 * set_string - A function that sets the value of a pointer to a char.
 *
 * @s: A pointer that points to the address of another pointer that has the
 * new string.
 * @to: A pointer to the original string.
 *
 * Description: The trick in this code is that for the variable s to reference
 * the address of another pointer, it must be a double pointer. This means s
 * should be of type type**, where type is the data type of the pointer it
 * points to. This allows s to hold the address of a pointer, enabling more
 * complex data structures and memory management.
 *
 * Return: Nothing(void...).
 */

void set_string(char **s, char *to)
{
	*s = to;
}
