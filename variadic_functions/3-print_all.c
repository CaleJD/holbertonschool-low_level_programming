#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - prints out all args
 * @format: 4 different data types
 */
void print_all(const char * const format, ...)
{
	va_list strs;
	unsigned int i;
	char *string;
	int printed;

	printed = 0;
	va_start(strs, format);
	i = 0;
	if (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(strs, int));
				printed = 1;
				break;
			case 'i':
				printf("%d", va_arg(strs, int));
				printed = 1;
				break;
			case 'f':
				printf("%f", va_arg(strs, double));
				printed = 1;
				break;
			case 's':
				string = va_arg(strs, char *);
				printf("%s", string == NULL ? "(nil)" : string);
				printed = 1;
				break;
		}
		if (format[i + 1] != '\0' && printed == 1)
		{
			printf(", ");
			printed = 0;
		}
		i++;
	}
	printf("\n");
	va_end(strs);
}
