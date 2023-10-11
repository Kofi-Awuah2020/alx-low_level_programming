#inlcude "main.h"

/**
 * add - adds two integers and returns the result.
 *
 * Return: 0 (Success)
 */
int add(int x, int y)
{
	int result;

	result = x + y;
	if (result > 9)
	{
		_putchar('0' + result / 10);
		_putchar('0' + result % 10);
	}
	else
	{
		_putchar('0' + result);
	}
	return (0);
}
