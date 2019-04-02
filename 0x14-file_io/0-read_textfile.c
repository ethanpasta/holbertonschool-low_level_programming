#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * read_textfile - function reads a text file and prints it to the
 * POSIX standard output
 * @filename: name of the file
 * @letters: amount of characters to read
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int f, count;

	if (!filename)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);
	f = open(filename, O_RDONLY);
	if (f < 0)
		return (0);
	count = read(f, buff, letters);
	if (count < 0)
		return (0);
	buff[count] = '\0';
	if (write(STDOUT_FILENO, buff, count) < 0)
		return (0);
	close(f);
	return (count);
}
