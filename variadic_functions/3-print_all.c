#include "variadic_functions.h"

/**
 * print_all - prints out all args
 * @format: 4 different data types
 */
void print_all(const char * const format, ...)
{
	va_list strs;
	unsigned int i;
	char *string;

	va_start(strs, format);
	i = 0;
	if (format == NULL)
		return;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(strs, int));
				break;
			case 'i':
				printf("%d", va_arg(strs, int));
				break;
			case 'f':
				printf("%f", va_arg(strs, double));
				break;
			case 's':
				string = va_arg(strs, char *);
				printf("%s", string == NULL ? "(nil)" : string);
				break;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
}
