#include "holberton.h"

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
		while (s[i] >= '0' && s[i] <= '9')
		{
			num *= 10;
			num += (s[i++] - '0');
		}
		num *= sign;
	}
	return (num);
}
