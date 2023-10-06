#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints text based on the last digit of n
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int last_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_num = n % 10;
	printf("Last digit of %d is %d", n, last_num);
	if (last_num > 5)
	{
		puts(" and is greater than 5");
	}
	else if (last_num == 0)
	{
		puts(" and is 0");
	}
	else
	{
		puts(" and is less than 6 and not 0");
	}
	return (0);
}
