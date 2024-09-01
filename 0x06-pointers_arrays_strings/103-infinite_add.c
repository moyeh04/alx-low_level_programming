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
	char num1[strlen(n1)+1];
	char num2[strlen(n2)+1];
	char *sml_num;

	strcpy(num1, n1);
	printf("%s\n", num1);
	strcpy(num2, n2);
	rev_string(num1);
	rev_string(num2);

	if (strlen(num1) < strlen(num2))
		sml_num = num1;
	else
		sml_num = num2;

	printf("%s\n", sml_num);
	for (i = 0; sml_num[i] != '\0'; i++)
	{
		printf("i:%d\n", i);
			r[i] = (((num1[i] - '0') + (num2[i] - '0') + carry) % 10) + '0';
			printf("r of [%d]:%c\n", i, r[i]);
			printf("carry of [%d]:%d\n", i, carry);
			
			if (((num1[i] - '0') + (num2[i] - '0') + carry) > 9)
				carry = 1;
			else
				carry = 0;
	}
	printf("r of [%d]:%d\n", i, strlen(r));
	if (carry == 1)
		r[i] = 1 + '0';

	rev_string(num1);
	rev_string(num2);
	rev_string(r);
			printf("r of [%d]:%c\n", 11, r[10]);
	printf("r of [%d]:%s\n", i, r);
	printf("r of [%d]:%d\n", i, strlen(r));

	if ((strlen(r) + 1) > size_r)
		return (0);

	return (r);
}


int main(void)
{
	char *n;
	char *m;
	char r2[15];
	char *res;

	n = "999999989";
	m = "111111111";
	res = infinite_add(n, m, r2, 15);
	if (res == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
	}
	return (0);
}
