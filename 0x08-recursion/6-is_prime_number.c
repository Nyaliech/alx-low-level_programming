#include "main.h"

/**
 * ni_prime - determine in input number is a prime number
 * @n: input number
 * @a: for iteration
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int ni_prime(unsigned int n, unsigned int a)
{
	if (n % a == 0)
	{
		if (n == a)
			return (1);
		else
			return (0);
	}
	return (0 + ni_prime(n, a + 1));
}

/**
 * is_prime_number - find out if input number is a prime number
 * @n: input number
 * Return: 1 if n is a prime number otherwise return 0
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	return (ni_prime(n, 2));
}
