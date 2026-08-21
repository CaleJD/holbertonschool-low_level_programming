#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to standard output
 * @filename: The name of the file to read
 * @letters: The number of letters to read
 *
 * Return: The number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int descriptor;
	ssize_t bytes_read;
	ssize_t bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	descriptor = open(filename, O_RDONLY);
	if (descriptor == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(descriptor);
		return (0);
	}

	bytes_read = read(descriptor, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(descriptor);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written != bytes_read)
	{
		free(buffer);
		close(descriptor);
		return (0);
	}

	free(buffer);
	close(descriptor);

	return (bytes_read);
}
