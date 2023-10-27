#include <stdio.h>
#include <stdlib.h>

/**
 * main - function adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (Succes) 1 (Error)
 */
int main(int argc, char *argv[])
{
	int x;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (x = 1; x < argc; x++)
	{
		if (atoi(argv[x]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
