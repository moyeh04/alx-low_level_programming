#include<unistd.h>

/**
 * main - Executes a statement to the standard error using printf function.
 *
 * Return: 1 #That is intended.
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, str, 59);
	return (1);
}
