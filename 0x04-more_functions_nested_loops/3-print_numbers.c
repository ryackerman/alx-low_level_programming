#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 */

void print_numbers(void)
{
	char n;

	for (n = 48; n <= 57; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
