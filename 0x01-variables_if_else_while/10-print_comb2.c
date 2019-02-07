#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;
	int digit;

	while (num <= 9)
	{
		for (digit = 0; digit <= 9; digit++)
		{
			putchar(num + 48);
			putchar(digit + 48);
			if (num != 9 || digit != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		num++;
	}
	putchar('\n');
	return (0);
}
