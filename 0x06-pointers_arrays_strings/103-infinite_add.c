#include "main.h"

/**
 * rev_string - A function that reverses a string.
 *
 * @rev: Pointer to input string.
 *
 * Return: Pointer to reversed string.
 */

void rev_string(char *rev)
{
	int i = 0;
	int j = strlen(rev) - 1;
	char temp;

	while (i < j)
	{
		temp = rev[i];
		rev[i] = rev[j];
		rev[j] = temp;

		i++;
		j--;
	}
}

/**
 * handle_carry - A function that handles residual carry.
 * @r : The buffer that the function will use to store the r.
 * @big_num: Pointer to the rest of the number for padding.
 * @i: The current position in the string.
 * @carry: The current carry.
 *
 * Return: Nothing(void...)
 */

void handle_carry(char *r, char *big_num, int i, int carry)
{
	for (; big_num[i] != '\0'; i++) /* The padding loop */
	{
		if (carry == 1)
			r[i] = (((big_num[i] - '0') + carry) % 10) + '0';
		else if (carry == 0)
			r[i] = (((big_num[i] - '0') + carry) % 10) + '0';

		if (((big_num[i] - '0') + carry) > 9)
			carry = 1;
		else
			carry = 0;
	}
	/* residual carry handle, and null terminator*/
	if (carry == 0)
		r[i] = '\0';
	else if (carry == 1)
	{
		r[i] = '1';
		r[i + 1] = '\0';
	}
}

/**
 * infinite_add - A function that adds two numbers.
 *
 * @n1: Pointer to first number.
 * @n2: Pointer to second number.
 * @r : The buffer that the function will use to store the r.
 * @size_r: The buffer size.
 *
 * Return: Pointer to r.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int carry = 0;
	char num1[1000];
	char num2[1000];
	char *sml_num;
	char *big_num;

	strcpy(num1, n1);
	strcpy(num2, n2);
	rev_string(num1);
	rev_string(num2);
	if (strlen(num1) < strlen(num2))
	{
		sml_num = num1;
		big_num = num2;
	}
	else
	{
		sml_num = num2;
		big_num = num1;
	}
	if ((unsigned long int)size_r <= strlen(n1) ||
			(unsigned long int)size_r <= strlen(n2))
		return (0);

	for (i = 0; sml_num[i] != '\0'; i++)
	{
		r[i] = (((num1[i] - '0') + (num2[i] - '0') + carry) % 10) + '0';

		if (((num1[i] - '0') + (num2[i] - '0') + carry) > 9)
			carry = 1;
		else
			carry = 0;
	}
	handle_carry(r, big_num, i, carry);
	rev_string(r);
	if ((strlen(r) + 1) > (unsigned long int)size_r)
		return (0);

	return (r);
}
