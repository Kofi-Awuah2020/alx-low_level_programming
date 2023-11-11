#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - check the code
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;
	char *operator;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	if (strchr("+-*/%", argv[2][0]) == NULL)
	{
		puts("Error");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3] == 0)
	{
		puts("Error");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	result = get_op_func(operator)(num1, num2);

	printf("%d\n", result);
	return (0);
}
