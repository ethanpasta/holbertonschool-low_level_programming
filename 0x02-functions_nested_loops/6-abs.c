#include "holberton.h"

/**
 * _abs - Function returns the absolute value of an integer
 * @n: Number to use
 *
 * Return: The absolute value
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	return (n * (-1));
}
