#include "function_pointers.h"

/**
 * print_name - function prints a name
 * @name: name to print
 * @f: function to use to print name
 *
 * Return: none
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
