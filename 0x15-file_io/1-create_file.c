#include "main.h"

/**
 * _strlen - finds the length of string
 * @str: pointer to the string
 *
 * Return: lengthof the string
 */

size_t _strlen(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}
/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: NULL terminated string to write the file
 * Return: 1 success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		len = write(fd, text_content, _strlen(text_content));
	close(fd);
	if (len == -1)
		return (-1);
	return (1);
}
