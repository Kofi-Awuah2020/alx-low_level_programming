#include "main.h"
#include <string.h>

#define FLAGS (O_CREAT | O_WRONLY | O_TRUNC)
#define PERMS (S_IRUSR | S_IWUSR)

/**
 * create_file - function creates a file.
 * @filename: filename
 * @text_content: null terminated string to write to the file
 *
 * Return: 1 (Success), -1 (Failure)
 */
int create_file(const char *filename, char *text_content)
{
	int fileDescriptor;
	ssize_t byteWritten;
	size_t len;

	if (filename == NULL)
	{
		return (-1); /* Empty filename */
	}

	fileDescriptor = open(filename, FLAGS, PERMS);
	if (fileDescriptor == -1)
	{
		return (-1); /*Failed to open file */
	}

	/* If text_content is empty create an empty file */
	if (text_content == NULL)
	{
		close(fileDescriptor);
		return (-1);
	}

	len = strlen(text_content);
	byteWritten = write(fileDescriptor, text_content, len);
	if (byteWritten == -1 || (size_t)byteWritten != len)
	{
		close(fileDescriptor);
		return (-1); /* Error occured while writing */
	}
	/* Close file and return success */
	close(fileDescriptor);
	return (1);
}
