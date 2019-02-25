#include "holberton.h"

/**
 * set_string - function sets the value of a pointer
 * to a char
 * @s: pointer to change
 * @to: char to point to
 *
 * Return: None
 */
void set_string(char **s, char *to)
{
	*s = to;
}
