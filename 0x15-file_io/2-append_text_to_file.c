#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int filedes, count, len = 0;

	if (filename == NULL)
		return (-1);

	filedes = open(filename, O_APPEND | O_RDWR);
	if (filedes == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(filedes);
		return(1);
	}

	while (text_content[len])
		len++;

	count = write(filedes, text_content, len);

	if (count == -1 || count != len)
		return (-1);

	close(filedes);

	return (1);
}
