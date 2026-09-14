#include "variadic_functions.h"

/**
 * print_numbers - prints a set of numbers followed by a new line
 * @separator: string to put in between numbers
 * @n: amount of ints to process
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	i = 0;
	if (separator == NULL)
		return;
	va_start(nums, n);
	while (i < n)
	{
		printf("%d%s", va_arg(nums, int), separator);
		i++;
	}
	printf("\n");
}
