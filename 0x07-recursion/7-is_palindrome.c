#include "holberton.h"

/**
 * lenS - function returns string length
 * @s: string to check
 *
 * Return: string length
 */
int lenS(char *s)
{
	if (*s == '\0')
		return (0);
	return (lenS(s + 1) + 1);
}

/**
 * check_palindrome - function checks if string is palindrome
 * @s: string to check
 * @beg: first position
 * @end: second position
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
 * is_palindrome - function checks if string is palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (s == '\0')
		return (1);
	return (check_palindrome(s, 0, lenS(s) - 1));
}
