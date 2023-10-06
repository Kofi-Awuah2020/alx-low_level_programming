#include <stdio.h>

/**
 * main - Prints alphabets in reverse order
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int alpha;

	alpha = 'z';
	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
