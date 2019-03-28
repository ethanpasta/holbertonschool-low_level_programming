#include "holberton.h"
#include <stdio.h>

/**
 * flip_bits - function returns the number of bits you would need to
 * flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bit1, bit2, count = 0;

	while (n && m)
	{
		bit1 = n & 1;
		bit2 = m & 1;
		if (bit1 != bit2)
			count++;
		n >>= 1;
		m >>= 1;
	}
	while (n > 0)
	{
		if (n & 1)
			count++;
		n >>= 1;
	}
	while (m > 0)
	{
		if (m & 1)
			count++;
		m >>= 1;
	}
	return (count);
}
