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
	while(argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
