#include "holberton.h"

/**
 * _islower - function checks for lowercase character
 * @c: The character to check
 *
 * Return: 1 if matches, 0 otherwise
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	return (0);
}
