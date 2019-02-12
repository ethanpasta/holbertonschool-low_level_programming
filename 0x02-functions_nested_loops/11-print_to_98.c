#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - Function prints all natural numbers from n to 98
 * @n: Number to start printing from
 */
void print_to_98(int n)
{
	int tmp;

	if (n > 98)
		for (tmp = n; tmp > 98; tmp--)
			printf("%d, ", tmp);
	else
		for (tmp = n; tmp < 98; tmp++)
			printf("%d, ", tmp);
	printf("98\n");
}
