#include "holberton.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: string to append to
 * @src: string to append
 *
 * Return: Concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = src[j];
	return (dest);
}
