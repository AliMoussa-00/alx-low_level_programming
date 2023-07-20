#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: seperator between nums
 * @n: number of args.
 *
 * Return: sum of args.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;

	if (separator == NULL)
		separator = "";

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(ap, n);

	for (i = 0; i < n - 1; i++)
	{
		s = va_arg(ap, char *);
		printf("%s%s", s ? s : "(nil)", separator);
	}
	
	s = va_arg(ap, char *);
	printf("%s", s ? s : "(nil)");
	printf("\n");

	va_end(ap);
}
