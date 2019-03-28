#include "holberton.h"

/**
 * set_bit - function sets the valye of a bit to 1
 * @n: number to use
 * @index: the index
 *
 * Return: 1 if it worked
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int bit;

	if (!n)
		return (-1);
	bit = 1 << index;
	*n = *n | bit;
	return (1);
}
