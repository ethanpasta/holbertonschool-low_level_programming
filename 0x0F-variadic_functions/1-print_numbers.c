#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function prints numbers
 * @seperator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: none
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (seperator && i != n - 1)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(args);
}
