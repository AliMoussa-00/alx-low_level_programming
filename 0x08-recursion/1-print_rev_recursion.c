#include "main.h"
/**
 * _puts_rev - prints a string in reverse.
 * @s: pointer to pointer to string.
 *
 * Return: void.
 */
void _puts_rev(char *s)
{
	if (*s == '\0')
		_puts_rev(++s);

	_putchar(*s);
}

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: pointer to pointer to string.
 *
 * Return: void.
 */
void  _print_rev_recursion(char *s)
{
	_puts_rev(s);

	_putchar('\n');
}
