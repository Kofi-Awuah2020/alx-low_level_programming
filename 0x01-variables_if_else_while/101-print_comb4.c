#include <stdio.h>

/**
 * main -Prints all possible different combinations of three digits.
 *
 * Return: 0 (Sucess)
 */
int main(void)
{
	int x;
	int y;
	int z;

	x = 48;
	while (x <= 57)
	{
		y = x + 1;
		while (y <= 57)
		{
			z = y + 1;
			while (z <= 57)
			{
				putchar(x);
				putchar(y);
				putchar(z);
				if (x != 55 || y != 56 || z != 57)
				{
					putchar(',');
					putchar(' ');
				}
				z++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
