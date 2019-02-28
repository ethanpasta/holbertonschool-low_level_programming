#include "holberton.h"

/**
 * str_len - function returns length of string
 * @s: string to check
 *
 * Return: none
 */
int str_len(char *s)
{
	if (!*s)
		return (0);
	return (str_len(s + 1) + 1);
}

/**
 * check_palindrome - function checks if a string is a palindrome
 * @beg: beginning position
 * @end: last position
 * @s: string to use
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int check_palindrome(char *s, int beg, int end)
{
	if (beg == end || beg + 1 == end)
		return (1);
	else if (s[beg] != s[end])
		return (0);
	return (check_palindrome(s, beg + 1, end - 1));
}

/**
 * is_palindrome - function checks if string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	int len = str_len(s) - 1;

	return (check_palindrome(s, 0, len));
}
