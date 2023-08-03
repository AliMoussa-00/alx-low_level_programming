#include "main.h"

/**
 * flip_bits -  returns number of bits to flip to go from n to m.
 * @n: number n.
 * @m: number m.
 *
 * Return: 1 or -1.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			i++;

		n >>= 1;
		m >>= 1;
	}

	return (i);
}
