#include "main.h"
/**
 * _puts_rev_recursion - prints a string in reverse.
 * @s: pointer to pointer to string.
 *
 * Return: void.
 */
void _puts_rev_recursion(char *s)
{
	if (*s > '\0')
		_puts_rev_recursion(++s);

	_putchar(*s);
}

/**
 * _puts_rev - prints a string in reverse.
 * @s: pointer to pointer to string.
 *
 * Return: void.
 */
void _puts_rev(char *s)
{
	_puts_rev_recursion(s);

	_putchar('\n');
}
