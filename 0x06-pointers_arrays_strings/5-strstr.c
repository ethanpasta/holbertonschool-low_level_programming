#include <stdio.h>
#include "holberton.h"

/**
 * _strstr - function locates a substring
 * @haystack: string to search in
 * @needle: substring to search for
 *
 * Return: a pointer to the beginning of the located
 * substring, or NULL if substring cannot be found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, count = 0;

	while (needle[count++])
		;
	count -= 1;
	while (*haystack)
	{
		for (i = 0; needle[i] != '\0'; i++)
			if (*(haystack + i) != *(needle + i))
				break;
		if (i == count)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
