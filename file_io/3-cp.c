#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

/**
 * close_file - Closes a file descriptor
 * @descriptor: File descriptor to close
 *
 * Return: 0 on success, -1 on failure
 */
int close_file(int descriptor)
{
	if (close(descriptor) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", descriptor);
		return (-1);
	}

	return (0);
}

/**
 * copy_file - Copies one file to another
 * @source: Source file name
 * @destination: Destination file name
 *
 * Return: 0 on success, 98 for read failure, or 99 for write failure
 */
int copy_file(const char *source, const char *destination)
{
	int source_fd;
	int destination_fd;
	ssize_t bytes_read;
	ssize_t bytes_written;
	char buffer[1024];

	source_fd = open(source, O_RDONLY);
	if (source_fd == -1)
		return (98);

	destination_fd = open(destination, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (destination_fd == -1)
	{
		close(source_fd);
		return (99);
	}

	while ((bytes_read = read(source_fd, buffer, 1024)) > 0)
	{
		bytes_written = write(destination_fd, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(source_fd);
			close(destination_fd);
			return (99);
		}
	}

	if (bytes_read == -1)
	{
		close(source_fd);
		close(destination_fd);
		return (98);
	}

	if (close_file(source_fd) == -1)
		return (100);

	if (close_file(destination_fd) == -1)
		return (100);

	return (0);
}

/**
 * main - Copies a file to another file
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, or an error code on failure
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	result = copy_file(argv[1], argv[2]);
	if (result == 98)
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
	else if (result == 99)
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]);

	return (result);
}
