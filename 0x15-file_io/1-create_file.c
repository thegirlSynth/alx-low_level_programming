#include "main.h"


/**
 * create_file - creates a file.
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int filedes, count, len = 0;

	if (filename == NULL)
		return (-1);

	filedes = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (filedes == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(filedes);
		return (1);
	}

	while (text_content[len])
		len++;

	count = write(filedes, text_content, len);
	if (count == -1 || count != len)
		return (-1);

	close(filedes);
	return (1);
}
