#include "main.h"

/**
 * primeCheck - checks prime number
 * @a: variable used to check divisibility of num
 * @num: input variable to be checked
 *
 * Return: (1) (Prime number), 0 (Othewise)
 */
int primeCheck(int num, int a)
{
	if (num < 2)
		return (0);
	if (num == 2)
		return (1);
	if (a >= num / 2)
		return (1);
	if (num % a == 0)
		return (0);
	else
		return (primeCheck(num, a + 1));
	return (1);
}
/**
 * is_prime_number - checks if input is a prime number or other wise
 * @n: input number
 *
 * Return: 1 (Prime number), 0 (Otherwise)
 */
int is_prime_number(int n)
{
	return (primeCheck(n, 2));
}
