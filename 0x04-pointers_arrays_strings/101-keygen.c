#include "holberton.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num = 0, ra;

	srand(time(0));
	while (num != 2772)
	{
		ra = rand() % 94 + 33;
		num += ra;
		putchar(ra);
		if (num >= 2739)
		{
			putchar(2772 - num);
			num += (2772 - num);
		}
	}
	return (0);
}
