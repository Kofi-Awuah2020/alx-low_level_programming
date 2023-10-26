#include "main.h"

/**
 * appx_root - checks root starting from 1 till root * root = n.
 * @root: variable for calculating square root
 * @n: number that sqaure root most be calculated from
 *
 * Return: result of calculation
 */
int appx_root(int root, int n)
{
	if (root * root > n)
	{
		return (-1);
	}
	if (root * root == n)
	{
		return (root);
	}
	return (appx_root(root + 1, n));
}

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: input number
 *
 * Return: result
 */
int _sqrt_recursion(int n)
{
	return (appx_root(1, n));
}
