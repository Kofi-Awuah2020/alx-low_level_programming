#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	int x;
	char *y;

	va_start(nums, n);
	for (x = 0; x < (int)n; x++)
	{
		y = va_arg(nums, char *);
		printf("%s", (y == NULL) ? "(nil)" : y);
		if (separator != NULL && x < ((int)n -1))
		{
			printf("%s", separator);
		}
	}
	va_end(nums);
	printf("\n");
}

