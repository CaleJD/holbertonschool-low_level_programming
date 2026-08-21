#include "main.h"

/**
 * check_prime - Checks whether n has a divisor
 * @n: Number being checked
 * @division: Current divisor
 *
 * Return: 1 if prime, otherwise 0
 */
int check_prime(int n, int division)
{
	if (division == n)
		return (1);

	if (n % division == 0)
		return (0);

	return (check_prime(n, division + 1));
}

/**
 * is_prime_number - Determines whether n is prime
 * @n: Number being checked
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check_prime(n, 2));
}
