#include <stdio.h>
#include "main.h"

/**
 * get_endianness - Checks the endiannessof the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;

	char *byte = (char *)&num; /*Interpret the memory as an array of chars*/

	return ((int)(*byte)); /*Return the value of first byte */
}
