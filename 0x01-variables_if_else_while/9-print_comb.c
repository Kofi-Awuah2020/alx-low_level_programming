#include <stdio.h>

/**
 * main - Prints 0 - 9 separated by ',' and ' '
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int digit;
	int comma;
	int space;

	digit = 48;
	comma = 44;
	space = 32;
	while (digit < 58)
	{
		putchar(digit);
		if (digit != 57)
		{
			putchar(comma);
			putchar(space);
		}
		digit++;
	}
	putchar('\n');
	return (0);
}
