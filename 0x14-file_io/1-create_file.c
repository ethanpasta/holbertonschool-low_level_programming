#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * create_file - function creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int f, written, len = 0;

	if (!filename)
		return (-1);
	if (text_content)
		while (text_content[len])
			len++;
	f = open(filename, O_WRONLY | O_TRUNC);
	if (f < 0)
	{
		f = open(filename, O_WRONLY | O_CREAT, 0600);
		if (f < 0)
			return (-1);
		written = write(f, text_content, len);
		if (written < 0)
			return (-1);
	}
	else
	{
		written = write(f, text_content, len);
		if (written < 0)
			return (-1);
	}
	close(f);
	return (1);
}
