#include <stdio.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	long n1 = 1, n2 = 2, next, i;
	for (i = 0; i < 25; i++)
	{
		printf("%lu, %lu, ", n1, n2);
		next = n1 + n2;
		n1 = next;
		n2 = next + n2;
	}
	return (0);
}
