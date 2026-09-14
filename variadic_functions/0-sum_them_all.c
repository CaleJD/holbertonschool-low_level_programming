#include "variadic_functions.h"

/**
 * sum_them_all - collects integers and sums them
 * @n: number of ints to receive
 * Return: total of ints
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	unsigned int total;

	i = 0;
	total = 0;
	if (n == 0)
		return (0);
	va_start(nums, n);
	while (i < n)
	{
		total += va_arg(nums, int);
		i++;
	}
	return (total);
}
