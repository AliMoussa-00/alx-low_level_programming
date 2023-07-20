#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_int - print int from format.
 * @sep: separator between args.
 * @ap: to access the args.
 *
 * Return: nothing.
 */
void print_int(char *sep, va_list ap)
{
	printf("%s%d", sep, va_arg(ap, int));
}

/**
 * print_char - print char from format.
 * @sep: separator between args.
 * @ap: to access the args.
 *
 * Return: nothing.
 */
void print_char(char *sep, va_list ap)
{
	printf("%s%c", sep, va_arg(ap, int));
}

/**
 * print_float - print float from format.
 * @sep: separator between args.
 * @ap: to access the args.
 *
 * Return: nothing.
 */
void print_float(char *sep, va_list ap)
{
	printf("%s%f", sep, va_arg(ap, double));
}

/**
 * print_string - print string from format.
 * @sep: separator between args.
 * @ap: to access the args.
 *
 * Return: nothing.
 */
void print_string(char *sep, va_list ap)
{
	char *s = va_arg(ap, char *);

	printf("%s%s", sep, s ? s : "(nil)");
}

/**
 * print_all - a function that prints anything.
 * @format: format to print args according to.
 *
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	forms f[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL},
	};
	int i, j;
	va_list ap;
	char *separator = "";

	va_start(ap, format);
	i = 0;

	while (format && format[i])
	{
		j = 0;
		while (f[j].arg_type)
		{
			if (format[i] == f[j].arg_type[0])
			{
				f[j].print_arg(separator, ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
