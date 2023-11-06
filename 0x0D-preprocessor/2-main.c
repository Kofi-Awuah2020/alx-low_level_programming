#include <stdio.h>

/**
 * main - entry point prints the name of the file it was compiled from
 * followed by a new line
 * Return: 0 Always
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
