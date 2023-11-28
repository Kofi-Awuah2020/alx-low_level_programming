#include "main.h"
#include <string.h>

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of file
 * @text_content: the NULL terminated string to add at end of file
 *
 * Return: 1 (Success), -1 (Failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileDescriptor;
	ssize_t bytesWritten;
	size_t len;

	if (filename == NULL)
	{
		return (-1); /* Empty filename */
	}

	fileDescriptor = open(filename, O_WRONLY | O_APPEND);
	if (fileDescriptor == -1)
	{
		return (-1); /*Failure to open file */
	}
	if (text_content == NULL)
	{
		close(fileDescriptor); /* No text to append to file */
		return (1);
	}
	len = strlen(text_content);
	bytesWritten = write(fileDescriptor, text_content, len);
	close(fileDescriptor);

	/* Check if write failed */
	if (bytesWritten == -1 ||  (size_t)bytesWritten != len)
	{
		return (-1);
	}
	return (1);
}
