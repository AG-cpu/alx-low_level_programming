#include "main.h"

/**
 * clear_bit - index  value reseting to 0.
 * @n: index pointer.
 * @index: index value.
 * Return: cracked - -1.
 * else - 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	return (-1);

	*n &= ~(1 << index);

	return (1);
}
