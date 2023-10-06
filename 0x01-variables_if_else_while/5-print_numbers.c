#include <stdio.h>

/**
 * main - Prints single digits of Base 10
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int x;

	x = 0;
	while (x < 10)
	{
		printf("%d", x);
		x++;
	}
	putchar('\n');
	return (0);
}
