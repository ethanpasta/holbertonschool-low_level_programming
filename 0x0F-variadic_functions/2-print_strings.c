#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function prints strings
 * @seperator: string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: none
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		printf("%s", s ? s : "(nil)");
		if (seperator && i != n - 1)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(args);
}
