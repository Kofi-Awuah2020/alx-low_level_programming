#include "main.h"

/**
 * factorial - function returns the factorial of a number
 * @n: number to used in calculation
 *
 * Return: the result.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
