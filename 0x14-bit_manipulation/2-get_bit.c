#include "main.h"

/**
 * get_bit - find index value.
 * @n: bit number.
 * @index: The index start point 0.
 *
 * Return: cracked - -1.
 * else - bit index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	return (-1);

	if ((n & (1 << index)) == 0)
	return (0);

	return (1);
}
