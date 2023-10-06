#include <stdio.h>

/**
 * main - Prints alphabets in lower case except 'q' and 'e'
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		if (alpha == 'e' || alpha == 'q')
		{
			alpha ++;
		}
		putchar(alpha);
		alpha ++;
	}
	putchar('\n');
	return (0);
} 
