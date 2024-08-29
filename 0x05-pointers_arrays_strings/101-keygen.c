#include "main.h"

/**
 * gen_next_char - A function that generates an alphanumeric character.
 *
 * @rand_num: A random number of range 0 - 61 that fits all possible
 * alphanumeric characters.
 *
 * Return: An alphanumeric character.
 */

char gen_next_char(int rand_num)
{
	char ASCII_password;

	if (rand_num < 10)
		ASCII_password = '0' + rand_num;
	else if (rand_num < 36)
		ASCII_password = 'A' + (rand_num - 10);
	else
		ASCII_password = 'a' + (rand_num - 36);

	return (ASCII_password);
}

/**
 * crack_me - A function that would generate random passwords
 * to crack the given 101-crackme
 *
 * Description:
 * to tackle this we used some reverse engineering and decompiled the binary
 * file to study the behaviour of the crackme file and upon
 * that we are going to use the key-gen techinque
 * to generate a random valid password that would work on it.
 *
 * Todo:
 * Make the last character also alphanumeric.
 * Solved by:
 * The second while loop ensures the final character is alphanumeric.
 * If it’s not, we adjust the sum by removing the last added character and
 * trying again.
 *
 * Return: Nothing(void...)
 */

void crack_me(void)
{
	int sum_of_ASCII = 0;
	int ASCII_range = 62; /* Number of alphanumeric characters */
	int max_range = 122; /* To count for the biggest ASCII value 'z' 122 */
	int rev_eng_sum_of_ASCII_password = 2772;
	int soap = rev_eng_sum_of_ASCII_password; /* Just a shorter version */
	int limit = soap - max_range;
	int rand_num;
	char ASCII_password, final_char;

	srand(time(NULL)); /* Generates a random seed based on current time */

	while (sum_of_ASCII <= limit)
	{
		rand_num = rand() % ASCII_range;

		ASCII_password = gen_next_char(rand_num);

		sum_of_ASCII += ASCII_password;
		putchar(ASCII_password);
	}

	final_char = (soap - sum_of_ASCII);

	while (!((final_char >= '0' && final_char <= '9') ||
				(final_char >= 'A' && final_char <= 'Z') ||
				(final_char >= 'a' && final_char <= 'z')))
	{
		sum_of_ASCII -= ASCII_password;
		rand_num = rand() % ASCII_range;

		ASCII_password = gen_next_char(rand_num);

		sum_of_ASCII += ASCII_password;
		final_char = (soap - sum_of_ASCII);
	}
	putchar(final_char);
}

/**
 * main - Entry point
 *
 * Return: 0 -> Success.
 */

int main(void)
{
	crack_me();

	return (0);
}
