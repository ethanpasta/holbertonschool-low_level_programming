#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>

/**
 * struct type_st - struct holds character, and pointer function
 * @c: character
 * @f: pointer to function
 */
typedef struct type_st
{
	char c;
	void (*f)(va_list);
} type_st;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
