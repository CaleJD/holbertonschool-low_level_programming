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
	/**if (format == NULL)
		return;*/
	while (format[i] != '\n')
	{
		switch (format[i])
		{
			case 'c':
				string = va_arg(strs, char*);
				if (string == NULL)
					printf("(nil)");
				printf("%s", va_arg(strs, char*));
				break;
			case 'i':
				printf("%d", va_arg(strs, int));
				break;
			case 'f':
				printf("%d", va_arg(strs, int));
				break;
			case 's':
				printf("%s", va_arg(strs, char*));
				break;
		}
		/**if (format[i + 1] != '\n')
			printf(", ");*/
		i++;
	}
	printf("\n");
}
