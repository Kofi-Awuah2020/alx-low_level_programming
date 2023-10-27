#include <stdio.h>

/**
 * main - function prints all arguments it recieves
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
