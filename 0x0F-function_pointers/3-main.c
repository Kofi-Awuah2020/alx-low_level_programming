#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;
	char str[] = "+ - * / %";

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	if (strchr(str, argv[2][0]) == NULL)
	{
		puts("Error");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	result = get_op_func(argv[2])(num1, num2);

	printf("%d\n", result);
	return (0);
}
