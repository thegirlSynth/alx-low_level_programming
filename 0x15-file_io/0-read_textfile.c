#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the text file
 * Return: the actual number of letters it could read and print, on Success.
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t filedes, count, index;
	char *thefile;

	if (filename == NULL)
		return (0);

	thefile = malloc(sizeof(char) * letters);
	if (thefile == NULL)
		return (0);

	filedes = open(filename, O_RDONLY);
	index = read(filedes, thefile, letters);
	count = write(STDOUT_FILENO, thefile, index);

	if (filedes == -1 || index == -1 || count == -1 || count != index)
	{	free(thefile);
		return (0);
	}

	close(filedes);
	free(thefile);

	return (count);
}
