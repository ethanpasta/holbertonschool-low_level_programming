#include "holberton.h"

/**
 * _atoi - function converts a string to an integer
 * @s: string to convert
 *
 * Return: Integer converted
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, num = 0;

	while ((s[i] < '0' || s[i] > '9') && s[i])
	{
		if (s[i] == '-')
		{
			sign = sign * (-1);
		}
		i++;
	}
	if (s[i] != '\0')
	{
		if (sign == -1)
		{
			num = (s[i] - '0') * sign;
			i = i + 1;
			while (s[i] <= '9' && s[i] >= '0')
			{
				num = num * 10;
				num = num - (s[i] - '0');
				i++;
			}
		}
		else
		{
			num = s[i] - '0';
			i = i + 1;
			while (s[i] <= '9' && s[i] >= '0')
			{
				num = num * 10;
				num = num + (s[i] - '0');
				i++;
			}
		}
	}
	return (num);
}
