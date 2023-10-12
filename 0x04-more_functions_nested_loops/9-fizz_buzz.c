#include <stdio.h>

/**
 * main - prints numbers 1 -100, followed by (\n)
 *
 * Return: 0 (Success), 1 (Fail)
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", x);
		}
		if (x < 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
