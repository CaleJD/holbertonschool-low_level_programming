#include "variadic_functions.h"

/**
 * print_strings - prints given strings on new lines
 * @separator: string to put between lines
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	unsigned int i;

	va_start(strs, n);
	i = 0;
	while (i < n)
	{
		if (va_arg(strs, char *) != NULL)
			printf("%s", va_arg(strs, char *));
		if ((i + 1) != n)
		{
			if (separator != NULL && va_arg(strs, char *) != NULL)
				printf("%s", separator);
		}
		i++;
	}
	printf("\n");
}
