#include <stdio.h>

/**
 * main - Prints single digits of base 10
 *
 * Return: 0 (Success)
 */
int main(void)
{
    int x;
    
    x = 48;
    while (x < 58)
    {
	putchar(x);
	x++;
    }
    putchar('\n');
    return (0);
}

