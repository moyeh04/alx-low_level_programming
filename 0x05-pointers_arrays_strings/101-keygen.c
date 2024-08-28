#include "main.h"

/**
 * crack_me - A function that would generate random passwords to crack the given
 * 101-crackme
 *
 * Description:
 * to tackle this we used some reverse engineering and decompiled the binary
 * file to study the behaviour of the crackme file and upon that we are going to
 * use the key-gen techinque to generate a random valid password that would work
 * on it.
 *
 * Return: Nothing(void...)
 */

void crack_me(void)
{
	int sum_of_ASCII = 0;
	int ASCII_range = 127;
	int rev_eng_sum_of_ASCII_password = 2772;
	int limit = rev_eng_sum_of_ASCII_password - ASCII_range;
	
	char ASCII_password;

	srand(time(NULL));

	while (sum_of_ASCII <= limit)
	{
		ASCII_password = rand() % (ASCII_range + 1);
		
		sum_of_ASCII += ASCII_password;

		putchar(ASCII_password);
	}
	putchar(rev_eng_sum_of_ASCII_password - sum_of_ASCII);

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
