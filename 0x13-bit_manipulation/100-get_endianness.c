#include "holberton.h"

/**
 * get_endianness - function checks the endianness
 *
 * Return: none
 */
int get_endianness(void)
{
	int i = 1;

	return (*(char *)&i == 1);
}
