#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	int x;
	int y;

	va_start(nums, n);
	for (x = 0; x < (int)n; x++)
	{
		y = va_arg(nums, int);
		printf("%d", y);
		if (separator != NULL && x < ((int)n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(nums);
	printf("\n");
}
