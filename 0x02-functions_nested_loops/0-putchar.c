#include "main.h"

/**
 * main - Entry point.
 *
 * Description: prints _putchar followed by a new line using the _putchar
 *				prototype.
 *
 * Return: (0) -> Success.
 */

int main(void)
{
	char pchar[] = "_putchar\n";
	int  pch;

	for (pch = 0; pchar[pch] != '\0'; pch++)
		_putchar(pchar[pch]);

	return (0);
}
