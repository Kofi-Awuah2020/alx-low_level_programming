#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything.
 * @format: is a list of types of arguments passed to the function
 *
 * Return: Void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int x = 0;
	char *str;

	va_start(args, format);
	while (format && format[x] != '\0')
	{
		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("nil");
					break;
				}
				printf("%s", str);
				break;
			default:
				++x;
				continue;
		}
		if (format[x + 1] != '\0')
		{
			printf(", ");
		}
		x++;
	}
	printf("\n");
	va_end(args);
}
