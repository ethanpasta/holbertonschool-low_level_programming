#include "holberton.h"

/**
 * _atoi - function converts a string to an integer
 * @s: string to convert
 *
 * Return: Integer converted
 */
int _atoi(char *s)
{
	int num = 0, i = -1, sign = 1;

	while ((s[++i] < '0' || s[i] > '9') && s[i])
	{
		if (s[i] == '-')
			sign *= -1;
	}
	if (s[i])
	{
		num = s[i++] - '0';
		num *= -1;
		while (s[i] >= '0' && s[i] <= '9')
		{
			if (num == -2,147,483,648 || num == 2,147,483,647)
				break;
			num *= 10;
			num += (s[i] - '0');
			i++;
		}
	}
	return (num);
}
