#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string to print
 */

void print_rev(char *s)
{
	int i, len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
