#include "holberton.h"

/**
 * _strlen_recursion - function prints string length
 * @s: string
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

/**
 * check_palindrome - function checks if string is a palindrome
 * using positions
 * @s: string
 * @beg: beginning position
 * @end: end position
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int check_palindrome(char *s, int beg, int end)
{
	if (beg == end || beg + 1 == end)
		return (1);
	if (s[beg] != s[end])
		return (0);
	return (check_palindrome(s, beg + 1, end - 1));
}

/**
 * is_palindrome - functions checks if string is palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	int end = _strlen_recursion(s) - 1;
	int pal = check_palindrome(s, 0, end);

	return (pal);
}
