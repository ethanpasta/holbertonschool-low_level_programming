#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1, n2, n3, n4;
	int num1 = 0, num2 = 0;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			for (n3 = 0; n3 <= 9; n3++)
			{
				for (n4 = 0; n4 <= 9; n4++)
				{
					num1 = n1 * 10 + n2;
					num2 = n3 * 10 + n4;
					if (num1 < num2)
					{
						putchar(n1 + 48);
						putchar(n2 + 48);
						putchar(' ');
						putchar(n3 + 48);
						putchar(n4 + 48);
						if (num1 != 98)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
