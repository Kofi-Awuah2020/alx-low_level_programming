#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * standard output.
 * @letters: The number of letters the function should read or write
 * @filename: Pointer to filename
 *
 * Return: letters (Success) 0 (fail)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return (0);
	}

	int fileDescriptor;
	char *buffer = NULL;
	int x;
	size_t bytesRead = 0;
	ssize_t bytesWritten = 0;

	fileDescriptor = open(filename, O_RDONLY);
	if (fileDescriptor == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(filename);
		return (0);
	}

	bytesRead = read(fileDescriptor, buffer, letters);
	bytesWritten = write(STDOUT_FILENO, buffer, bytesWritten);
	if (bytesWritten != bytesRead || bytesWritten == -1)
	{
		return (0);
	}

	close(fileDescriptor);
	free(buffer);
	return (bytesRead);
}
