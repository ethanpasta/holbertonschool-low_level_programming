#include "holberton.h"

/**
 * _strcpy - copies string from src to dest
 * @src: string to copy
 * @dest: destination to copy to
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = src[i];
	return (dest);
}
