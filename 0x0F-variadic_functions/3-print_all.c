#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_int - function prints integer
 * @args: list of arguments
 *
 * Return: none
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_char - function prints char
 * @args: list of arguments
 *
 * Return: none
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_float - function prints float
 * @args: list of arguments
 *
 * Return: none
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - function prints string
 * @args: list of arguments
 *
 * Return: none
 */
void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s)
	{
		printf("%s", s);
		return;
	}
	printf("(nil)");
}

/**
 * print_all - function prints anything
 * @format: list of all types of arguments passed to the function
 * c - char
 * i - integer
 * f - float
 * s - char *
 *
 * Return: none
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *sep = "";
	type_st arr[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{0, NULL}
	};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (arr[j].c)
		{
			if (arr[j].c == format[i])
			{
				printf("%s", sep);
				arr[j].f(args);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
