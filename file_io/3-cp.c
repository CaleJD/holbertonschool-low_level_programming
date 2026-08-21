#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

/**
 * main - Copies the contents of one file to another file
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, or an error code on failure
 */
int main(int argc, char *argv[])
{
	int source_fd;
	int destination_fd;
	ssize_t bytes_read;
	ssize_t bytes_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	source_fd = open(argv[1], O_RDONLY);
	if (source_fd == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		return (98);
	}

	destination_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (destination_fd == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]);
		close(source_fd);
		return (99);
	}

	while ((bytes_read = read(source_fd, buffer, 1024)) > 0)
	{
		bytes_written = write(destination_fd, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			close(source_fd);
			close(destination_fd);
			return (99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		close(source_fd);
		close(destination_fd);
		return (98);
	}

	if (close(source_fd) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", source_fd);
		return (100);
	}

	if (close(destination_fd) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", destination_fd);
		return (100);
	}

	return (0);
}
