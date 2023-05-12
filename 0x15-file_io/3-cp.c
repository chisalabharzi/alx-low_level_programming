#include "main.h"

void check_IO_stat(int stat, int fd, char *filename, char mode);
/**
 * main - copies content from one file to another
 * @argc: argument count
 * @argv: argument passed
 * Return: 1 on success, exit otherwise
 */

int main(int argc, char *argv[])
{
	int src, dest, n_read = 1024, wrote, close_src, close dest;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "usage: cp file_from file_to\n");
		exit(97);

		src = open(argv[1], O_RDONLY);
		check_IO_stat(src, -1, argv[1], 'O');
		dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
		check_IO_stat(dest, -1, argv[2], 'W');
		while (n_read == 1024)
		{
			n_read = read(src, buffer, sizeof(buffer));
			if (n_read == -1)
				checK_IO_stat(-1, -1, argv[1], 'O');
			wrote = write(dest, buffer, n_read);
			if (wrote == -1)
				check_IO_stat(-1, -1, argv[2], 'W');
		}
		close_src = close(src);
		check_IO_stat(close_src, src, NULL, 'C');
		close_dest = close(dest);
		check_IO_stat(close_dest, dest, NULL, 'C');
		return (0);
	}

	/**
	 * check_IO_stat - checks if file can open and close
	 * @stat: file descriptor of file to be opened
	 * @filename: name of file
	 * @mode: closing or opening
	 * @fd: file descriptor
	 *
	 * Return: void
	 */

	{
		if (mode == 'C' && stat == -1)
		{
			dprintf(STDERR_FILENO, "Error: Cant't close fd %d\n", fd);
			exit(100);
		}
		else if (mode == 'O' && stat == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
			exit(98);
		}
		else if (mode == 'W' && stat == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
			exit(99);
		}
	}

