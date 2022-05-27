#include "main.h"

/**
 * flip_bits - bit counter
 * @n: int to be checked.
 * @m: fliping resulte.
 * Return: int to be fliped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
	bits += (xor & 1);
	xor >>= 1;
	}

	return (bits);
}
