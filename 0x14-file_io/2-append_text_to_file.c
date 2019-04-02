#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * append_text_to_file - function appends text at the end of a file
 * @filename: the name of the file
 * @text_content: a NULL terminated string to add at the end of a file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, written, len = 0;

	if (!filename)
		return (-1);
	if (text_content)
		while (text_content[len])
			len++;
	f = open(filename, O_WRONLY | O_APPEND);
	if (f < 0)
		return (-1);
	written = write(f, text_content, len);
	if (written < 0)
		return (-1);
	close(f);
	return (1);
}
