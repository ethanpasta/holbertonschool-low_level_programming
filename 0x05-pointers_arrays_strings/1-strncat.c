#include "holberton.h"

/**
 * _strncat - function concatenates n bytes
 * @dest: string to append to
 * @src: string to append
 * @n: number of bytes to transfer
 *
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; (j < n) && src[j]; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
