#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: seperator between nums
 * @n: number of args.
 *
 * Return: sum of args.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (separator == NULL)
		separator = "";

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(ap, n);

	for (i = 0; i < n - 1; i++)
		printf("%d%s", va_arg(ap, int), separator);

	printf("%d", va_arg(ap, int));
	printf("\n");

	va_end(ap);
}
