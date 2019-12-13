#include "holberton.h"

/**
 * is_divisible - function checks if first number is divisible by second
 * @a: first number
 * @b: second number
 *
 * Return: 0 if b is a factor of a, 1 otherwise
 */
int is_divisible(int a, int b)
{
	if (b == 2)
		return (1);
	if (a % b == 0)
		return (0);
	return (is_divisible(a, b - 1));
}

/**
 * is_prime_number - functions checks if n is a prime number
 * @n: number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 3 || n % 2 == 0)
		return (0);
	return (is_divisible(n, n / 2));
}
