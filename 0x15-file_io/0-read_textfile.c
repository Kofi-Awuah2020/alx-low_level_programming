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
	int fileDescriptor;
	char *buffer = NULL;
	ssize_t bytesRead = 0; /* Track bytes read by read() */
	ssize_t bytesWritten = 0; /* Track bytes written by write() */

	if (filename == NULL)
	{
		return (0); /* filename is empty */
	}

	fileDescriptor = open(filename, O_RDONLY);
	if (fileDescriptor == -1)
	{
		return (0); /* Failed to open file */
	}

	buffer = malloc(sizeof(char) * letters); /* Allocate Memory per letters */
	if (buffer == NULL)
	{
		close(fileDescriptor); /* Memory allocation failed */
		return (0);
	}

	bytesRead = read(fileDescriptor, buffer, letters);
	if (fileDescriptor == -1)
	{
		return (0); /* Read failed */
	}
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten != bytesRead || bytesWritten == -1)
	{
		return (0); /* Write failed to print number of bytes */
	}

	close(fileDescriptor);
	free(buffer);
	return (bytesWritten);
}
