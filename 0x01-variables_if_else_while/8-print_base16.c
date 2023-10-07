#include <stdio.h>

/**
 * main - Prints all base 16 numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int digit;
	int alpha;

	digit = 48;
	while (digit < 58)
	{
		putchar(digit);
		digit++;
	}
	alpha = 97;
	while (alpha < 103)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
