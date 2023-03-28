#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: char to check
 * @src: char to check
 *
 * Return: Dest
 */

char *_strcpy(char *dest, char *src)
{
	int = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
