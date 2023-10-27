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
	int y;
	int sum = 0;

	if (argc == 1)
	{
		puts("0");
	}
	else
	{
		for (x = 1; x < argc; x++)
		{
			int value = atoi(argv[x]);

			for (y = 0; y < argv[x][y] = '\0', y++)
			{
				if (atoi(argv[x][y]) == 0)
				{
					puts("Error");
					return (1);
				}
			}
			sum += value;
		}
		printf("%d\n", sum);
	}
	return (0);
}
