#include "holberton.h"

/**
 * _memcpy - function copies memory area
 * @dest: destination pointer to copy to
 * @src: pointer to copy from
 * @n: amount of bytes to copy
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
