#include "main.h"

/**
 * append_text_to_file _ appends text at the end of the file
 * @filename: name of the file
 * @text_content: the NULL terminated string to add at the end of file
 *
 * Return: 1 on success, -1 on failure
 *         if filename is NULL return -1
 *         if text_content is NULL do not add anything to file
 *         if file exists return 1, -1 if file doesn't exist
 *         or if you do not have required permission to write the file
 */

int append_text_to_file(const char *filename, char *text_content);
{
	int fd bytes_written;
	ssize_t text_size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_size])
			text_size++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	fd(text_content != NULL)
	{
		bytes_written = write(fd, text_content, text_size);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
