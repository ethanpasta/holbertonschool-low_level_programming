#include "holberton.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: Character to check
 *
 * Return: 1 if matches, 0 otherwise
 */
int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
		return (1);
	return (0);
}
