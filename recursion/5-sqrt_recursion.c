#include "main.h"

/**
 * square_root - Searches for the natural square root
 * @n: Number to check
 * @guess: Current possible square root
 *
 * Return: Natural square root, or -1 if none exists
 */
int square_root(int n, int guess)
{
	if (guess * guess == n)
		return (guess);

	if (guess * guess > n)
		return (-1);

	return (square_root(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number whose square root is calculated
 *
 * Return: Natural square root, or -1 if none exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (square_root(n, 0));
}
