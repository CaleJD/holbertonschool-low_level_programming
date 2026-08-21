#include "main.h"

/**
 * create_file - Creates a file and writes text to it
 * @filename: The name of the file to create
 * @text_content: The text to write on the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int descriptor;
	size_t length;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		length = 0;
		while (text_content[length] != '\0')
			length++;

		bytes_written = write(descriptor, text_content, length);
		if (bytes_written != (ssize_t)length)
		{
			close(descriptor);
			return (-1);
		}
	}

	if (close(descriptor) == -1)
		return (-1);

	return (1);
}
