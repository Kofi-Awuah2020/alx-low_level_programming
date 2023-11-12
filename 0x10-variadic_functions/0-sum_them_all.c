#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function returns the sum of all its parameters
 * @n: argument count
 *
 * Return: The sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	int sum;
	int x;

	va_start(nums, n);
	for (x = 0, sum = 0; x < (int)n; x++)
	{
		sum += va_arg(nums, int);
	}
	return (sum);
}
