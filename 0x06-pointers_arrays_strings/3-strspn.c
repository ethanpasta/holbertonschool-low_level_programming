#include "holberton.h"

/**
 * _strspn - function gets the length of a
 * prefix substring
 * @s: string to search
 * @accept: string of characters to search for in s
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, i, flag = 1;

	while (*s && flag)
	{
		for (i = 0; accept[i] != '\0'; i++)
			if (*s == accept[i])
			{
				count++;
				break;
			}
		if (!accept[i])
			flag = 0;
		s++;
	}
	return (count);
}
