#include "holberton.h"

/**
 * print_last_digit - Function returns the last digit of the number
 * @num: Number to return last digit from
 *
 * Return: last digit
 */
int print_last_digit(int num)
{
	int digit = num % 10;

	if (digit < 0)
		digit *= -1;
	_putchar(digit + '0');
	return (digit);
}
