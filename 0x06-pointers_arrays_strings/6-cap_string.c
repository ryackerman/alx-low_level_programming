#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 *
 * @s: string to capitalize
 *
 * Return: s
 */

char *cap_string(char *s)
{
	int i, cap = 1, len = 0;

	while (s[len])
	{
		switch (s[len])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			cap = 1;
			break;
			default:

			if (cap)
			{
				if (s[len] >= 'a' && s[len] <= 'z')
				{
					s[len] -= 32;
				}
				cap = 0;
			}
		}
		len++;
	}

	return (s);
}
