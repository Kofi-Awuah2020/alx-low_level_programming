#include <stdio.h>
#include <stdlib.h>

/**
 * main - function prints number of coins for change
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (Success) 1 (Error)
 */
int main(int argc, char *argv[])
{
	int amount;
	int coin_set[5] = {25, 10, 5, 2, 1};
	int x = 0;
	int change = 0;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	else
	{
		amount = atoi(argv[1]);

		while (x < 5)
		{
			if (coin_set[x] <= amount)
			{
				change += amount / coin_set[x];
				amount = amount % coin_set[x];
			}
			x++;
		}
		printf("%d\n", change);
	}
	return (0);
}
