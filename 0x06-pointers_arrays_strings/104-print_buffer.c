#include "main.h"

/**
 * print_buffer - A function that prints a buffer.
 *
 * @b: Pointer to the buffer.
 * @size: size (bytes).
 *
 * Description:
 * The function must print the content of size bytes of the buffer
 * pointed by b.
 *
 * Features:
 * The output should print 10 bytes per line
 * Each line starts with the position of the first byte of the line in
 * hexadecimal (8 chars), starting with 0
 * Each line shows the hexadecimal content (2 chars) of the buffer,
 * 2 bytes at a time, separated by a space
 * Each line shows the content of the buffer.
 * If the byte is a printable character, print the letter, if not, print.
 * Each line ends with a new line \n
 * If size is 0 or less, the output should be a new line only \n
 *
 * Return: Nothing(void...)
 */

void print_buffer(char *b, int size)
{
	int i;
	int j;
	int pointer = 0;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", pointer);

		for (j = 0; j < 10 && i + j < size; j += 2)
		{
			if (!(isprint(b[i + j])))
				b[i + j] += '\0';
			if (!(isprint(b[i + j + 1])))
				b[i + j + 1] += '\0';

			if (i + j + 1 < size)
				printf("%02x%02x ", b[i + j], b[i + j + 1]);
			else
				printf("%02x   ", b[i + j]);
		}
		while (j < 10)
		{
			printf("     ");
			j += 2;
		}
		for (j = 0; j < 10 && i + j < size; j++)
		{
			if (!(isprint(b[i + j])))
				b[i + j] = '.';
			printf("%c", b[i + j]);
		}
		pointer += 10;
		putchar('\n');
	}
}
