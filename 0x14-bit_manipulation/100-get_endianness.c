#include "main.h"

/**
 * get_endianness - checks the endianness.
 */

int get_endianness(void)
{
	unsigned int n = 1;
	char *ptr = (char*)&n;

	if (*ptr == 1)
		return (1);
	return (0);
}
