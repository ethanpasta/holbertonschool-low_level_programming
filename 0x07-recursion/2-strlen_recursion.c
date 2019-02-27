#include "holberton.h"

/**
 * _strlen_recursion - function returns length of string
 * @s: string to use
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (_strlen_recursion(s + 1) + 1);
	else
		return (0);
}
