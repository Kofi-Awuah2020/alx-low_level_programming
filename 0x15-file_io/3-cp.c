#include "main.h"

#define SIZE (1024)
#define FLAGS (O_CREAT | O_WRONLY | O_TRUNC)
#define PERMS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * close_fd - function closes the file descriptors
 * @fds: Array of file descriptors
 * @num_fds: number of file descriptors in the Array
 *
 * Return: Void
 */
void close_fd(int *fds, int num_fds)
{
	int x;

	for (x = 0; x < num_fds; x++)
	{
		if (close(fds[x]) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fds[x]);
			exit(100);
		}
	}
}

/**
 * copy - function copies the content of a file to another file
 * @fd_src: file descriptor of the source file
 * @fd_des:  file descriptor of the destination file
 * @src_file:  source file to be read/copied
 * @dest_file:  destination file to be written by copy function
 * @buff: buffer to store read operation
 *
 * Return: Void
 */
void copy(int fd_src, int fd_des, char *buff, char *src_file, char *dest_file)
{
	ssize_t bytesRead, bytesWritten;
	int fds[2];

	while ((bytesRead = read(fd_src, buff, SIZE)) > 0)
	{
		bytesWritten = write(fd_des, buff, bytesRead);
		if (bytesWritten == -1 || bytesWritten != bytesRead)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
			close(fd_src);
			close(fd_des);
			exit(99);
		}
	}
	free(buff);

	if (bytesRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
		close(fd_src);
		close(fd_des);
		exit(98);
	}

	fds[0] = fd_src;
	fds[1] = fd_des;

	close_fd(fds, 2);
	exit(0);
}

/**
 * main - entry function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (Succes), 1 (Fail)
 */
int main(int argc, char **argv)
{
	int fd_src;
	int fd_dest;
	char *src_file = argv[1];
	char *dest_file = argv[2];
	char *buffer = NULL;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = malloc(sizeof(char) * SIZE); /* Allocate memory for the buffer */
	if (buffer == NULL)
	{
		return (1);
	}

	fd_src = open(src_file, O_RDONLY);
	if (fd_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_dest = open(dest_file, FLAGS, PERMS);
	if (fd_dest == -1)
	{
		close(fd_src);
		dprintf(STDERR_FILENO, "Error Can't write to %s\n", argv[2]);
		exit(99);
	}

	copy(fd_src, fd_dest, buffer, src_file, dest_file);
	return (0);
}
