#include "holberton.h"

/**
 * get_bit - function returns the value of a bit at a given index
 * @n: the number
 * @index: the index
 *
 * Return: value of the bit, or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = n >> index;
	return (bit & 1);
}
