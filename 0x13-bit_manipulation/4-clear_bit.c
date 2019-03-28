#include "holberton.h"

/**
 * clear_bit - function sets the valye of a bit to 0 at given index
 * @n: number to use
 * @index: index of bit
 *
 * Return: 1 if worked, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int bit;

	if (!n || index > 31)
		return (-1);
	bit = ~(1 << index);
	*n = *n & bit;
	return (1);
}
