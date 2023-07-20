#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: num of args
 *
 * Return: sum of args.
 */
int sum_them_all(const unsigned int n, ...);


/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: seperator between nums
 * @n: number of args.
 *
 * Return: sum of args.
 */
void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: seperator between nums
 * @n: number of args.
 *
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct formats - structure to the format to print.
 *
 * @arg_type: the arg to print.
 * @print_arg: function to print the args.
 */
typedef struct formats
{
	char *arg_type;
	void (*print_arg)(char *, va_list);
} forms;

/**
 * print_all - a function that prints anything.
 * @format: format to print args according to.
 *
 * Return: nothing..
 */
void print_all(const char * const format, ...);

#endif
