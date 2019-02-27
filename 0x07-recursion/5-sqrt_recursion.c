#include "holberton.h"

/**
 * _sqrt_check - function checks if the parameter b
 * squared equals a
 * @a: first num
 * @b: second one
 *
 * Return: if b squared equals a
 */
int _sqrt_check(int a, int b)
{
	if (b * b == a)
		return (b);
	if (b == a)
		return (-1);
	return (_sqrt_check(a, b + 1));
}

/**
 * _sqrt_recursion - function calculates and returns
 * the natural square root of a number
 * @n: number to use
 *
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_check(n, 0));
}
