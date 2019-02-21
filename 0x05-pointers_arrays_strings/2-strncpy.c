#include "holberton.h"

/**
 * _strncpy - function copies a string
 * @dest: string to be copied to
 * @src: string to copy
 * @n: number of bytes to copy
 *
 * Return: Final string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; dest[i] != '\0' && src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	if (src[i] == '\0')
		while (dest[i] != '\0' && i < n)
			dest[i++] = '\0';
	return (dest);
}
