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

	while(i < j)
	{
		temp = rev[i];
		rev[i] = rev[j];
		rev[j] = temp;

		i++;
		j--;
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

	for (i = 0; sml_num[i] != '\0'; i++)
	{
			r[i] = (((num1[i] - '0') + (num2[i] - '0') + carry) % 10) + '0';
			
			if (((num1[i] - '0') + (num2[i] - '0') + carry) > 9)
				carry = 1;
			else
				carry = 0;
	}
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
	

	rev_string(r);

	if ((strlen(r) + 1) > (long  unsigned int)size_r)
		return (0);

	return (r);
}
