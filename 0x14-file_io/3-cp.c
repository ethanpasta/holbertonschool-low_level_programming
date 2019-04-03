#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * read_err - function prints to standard error
 * @filename: name of file to display
 *
 * Return: none
 */
void read_err(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
 * write_err - function prints to standard error on writing error
 * @filename: name of file to display
 *
 * Return: none
 */
void write_err(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

/**
 * close_err - function prints to standard ouptut on close error
 * @f: file to use
 *
 * Return: none
 */
void close_err(int f)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
	exit(100);
}

/**
 * main - entry point
 * @argc: number of arguments passed
 * @argv: arguments passed
 *
 * Return: exit status
 */
int main(int argc, char **argv)
{
	int f1, f2, reed, written, closepls;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f1 = open(argv[1], O_RDONLY);
	if (f1 < 0)
		read_err(argv[1]);
	f2 = open(argv[2], O_WRONLY | O_TRUNC | O_APPEND);
	if (f2 < 0)
	{
		f2 = open(argv[2], O_WRONLY | O_CREAT | O_APPEND, 0664);
		if (f2 < 0)
			write_err(argv[2]);
	}
	while ((reed = read(f1, buffer, 1024)) > 0)
	{
		written = write(f2, buffer, reed);
		if (written < 0)
			write_err(argv[2]);
	}
	if (reed == -1)
		read_err(argv[1]);
	closepls = close(f1);
	if (closepls < 0)
		close_err(f1);
	closepls = close(f2);
	if (closepls < 0)
		close_err(f2);
	return (0);
}
